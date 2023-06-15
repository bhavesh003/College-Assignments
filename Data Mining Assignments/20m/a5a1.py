import math  
import numpy as np
from sklearn.metrics import mean_absolute_error

actual = [2, 3, 5, 5, 9]
calculated = [3, 3, 8, 7, 6]

# Mean absolute error 
error = mean_absolute_error(actual, calculated)
print("Mean absolute error : " + str(error))

# Mean Squared Error
MSE = np.square(np.subtract(actual,calculated)).mean()
print("Mean squared error : " + str(MSE))

#Root mean square 
MSE = np.square(np.subtract(actual,calculated)).mean()   
RSME = math.sqrt(MSE)  
print("Root Mean squared error : " + str(RSME))