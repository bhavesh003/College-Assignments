from sklearn.cluster import KMeans
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.datasets import make_blobs
data = make_blobs(n_samples=400, n_features=2, centers=5, cluster_std=1.8)
data[0].shape

plt.scatter(data[0][:, 0], data[0][:, 1], c=data[1], cmap='rainbow')
kmeans = KMeans(n_clusters=5)
kmeans.fit(data[0])
kmeans.cluster_centers_
kmeans.labels_
f, (ax1, ax2) = plt.subplots(1, 2, sharey=True, figsize=(10, 6))
ax1.set_title('K Means')
ax1.scatter(data[0][:, 0], data[0][:, 1], c=kmeans.labels_, cmap='rainbow')
ax2.set_title("original")
ax2.scatter(data[0][:, 0], data[0][:, 1], c=data[1], cmap='rainbow')
plt.show()
