import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
df=pd.read_csv(r"StudentsPerformance.csv")
df #to display shape of data
df.shape #to display shape of data
df.head() #to display top rows of dataset with column
df.sample(10) #to display no of rows randomly
df.columns() #to display the number of column and names of colums
