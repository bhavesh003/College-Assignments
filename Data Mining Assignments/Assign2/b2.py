import pandas as pd
from sklearn.datasets import load_iris
iris_data=load_iris()
df=pd.DataFrame(iris_data.data,columns=iris_data.feature_names)
print(df)
training_data=df.sample(frac=0.8,random_state=25)
testing_data=df.drop(training_data.index)
print("No.of Training examples: ")
{training_data.shape[0]}
print("No.of Testing examples:")
{testing_data.shape[0]}
training_data.head()
testing_data.head()
