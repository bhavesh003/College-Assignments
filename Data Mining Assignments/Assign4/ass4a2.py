import numpy as np
import matplotlib.pyplot as plt
import pandas
from apyori import apriori

#store_data=pd.read_csv(r"C:\Users\Pratik\OneDrive\Documents\Groceries_dataset.csv",header=None)
# store_data=pd.read_csv(r"F:\prac\DM\Assign4\Groceries.csv",header=None)
store_data=pandas.read_csv(r"Groceries.csv")
store_data.head()

records=[]
for i in range(0,300):
  records.append([str(store_data.values[i,j]) for j in range(0,3)])


association_rules=apriori(records,min_support=0.0045,min_confidence=0.2,min_lift=3,min_length=2)
association_results=list(association_rules)
print(len(association_results))

print(association_results[0])
for item in association_results:
  pair=item[0]
  items=[x for x in pair]
print("Rule:"+items[0],"->"+items[1])
print("Support:"+str(item[1]))
print("Confidence:"+str(item[2][0][2]))
