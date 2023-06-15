import pandas as pd
df=pd.read_csv('student_scores.csv')
df.shape
df.plot.scatter(x='Hours',y='Scores',title='Scatterplot of hours and scores percentage')
print(df.corr())
print(df.describe())
y=df['Scores'].values.reshape(-1,1)
x=df['Hours'].values.reshape(-1,1)
print
print(df['Hours'].values)
print(df['Hours'].values.shape)
print(x.shape)
print(x)
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)
print(x_train)
print(y_train)
from sklearn.linear_model import LinearRegression
regressor=LinearRegression()
regressor.fit(x_train,y_train)
LinearRegression()
print(regressor.intercept_)
print(regressor.coef_)
def calc(slope,intercept,hours):
  return slope*hours+intercept

score=calc(regressor.coef_,regressor.intercept_,9.5)
print(score)
score=regressor.predict([[9.5]])
print(score)
y_pred=regressor.predict(x_test)
df_preds=pd.DataFrame({'Actual':y_test.squeeze(),'Predicted':y_pred.squeeze()})
print(df_preds)

from sklearn.metrics import mean_absolute_error,mean_squared_error
import numpy as np
mae=mean_absolute_error(y_test,y_pred)
mse=mean_squared_error(y_test,y_pred)
rmse=np.sqrt(mse)
print(f'Mean Absolute error:{mae:.2f}')
print(f'Mean squared error:{mse:.2f}')
print(f'Root mean squared error:{rmse:.2f}')