import matplotlib.pyplot as plt
import numpy as np

x = [5,2,9,4,7]
y = [10,5,8,4,2]
plt.bar(x,y)
plt.show()
plt.scatter(x,y)
plt.show()
data = np.random.randn(1000)  
plt.hist(data, bins=30, alpha=0.7)
plt.show()