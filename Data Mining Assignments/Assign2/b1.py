from sklearn.datasets import load_iris
from sklearn import preprocessing
iris=load_iris()
print(iris.data.shape)
x=iris.data
y=iris.target
normalized_x=preprocessing.normalize(x)
normalized_x