import numpy as np
from sklearn.linear_model import LinearRegression
x=np.array([1,2,3,4,5,6,7,8])
x=np.array(x).reshape((-1,1))
y=np.array([7,14,15,18,19,21,26,23])
model=LinearRegression().fit(x,y)
print(f"intercept b0:{model.intercept_}")
print(f"slope b1:{model.coef_}")