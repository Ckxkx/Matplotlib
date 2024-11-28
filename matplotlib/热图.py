import matplotlib.pyplot as plt
import numpy as np

plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False
plt.rcParams['font.size'] = 13
data = np.random.randn(10,10)

# plt.imshow(data,cmap='hot',interpolation='nearest') # hot 图
plt.imshow(data,cmap='YlGnBu',interpolation='nearest') # cold 图

plt.colorbar()
plt.title("热图")
plt.xlabel("x - 轴")
plt.ylabel("y - 轴")
plt.show()