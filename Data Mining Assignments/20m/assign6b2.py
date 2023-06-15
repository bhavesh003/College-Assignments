import numpy as np
import pandas as pd
from sklearn.preprocessing import StandardScaler, normalize
from sklearn.decomposition import PCA
import scipy.cluster.hierarchy as hc
import matplotlib.pyplot as plt
from sklearn.cluster import AgglomerativeClustering
df = pd.read_csv("Wholesale_customers_data.csv")
df = df.drop('Channel', axis=1)
df.fillna(method='ffill', inplace=True)
sc = StandardScaler()
df_scaled = sc.fit_transform(df)
df_normalized = normalize(df_scaled)
pca = PCA(n_components=6)
df_pca = pca.fit_transform(df_normalized)
df_pca = pd.DataFrame(df_pca)
df_pca.columns = ['Fresh', 'Milk', 'Grocery','Frozen', 'Detergents_Paper', 'Delicassen']
plt.figure(figsize=(8, 8))
plt.title('Visualising the data')
dendrogram = hc.dendrogram((hc.linkage(df_pca, method='ward')))
