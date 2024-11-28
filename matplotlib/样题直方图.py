import matplotlib.pyplot as plt

plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['font.size'] = 14

plt.title("学习活动直方图")
plt.xlabel("学习活动")
plt.ylabel("时间/小时")
labels = ['阅读', '练习', '视频学习', '测验', '项目实践']
sizes = [50, 30, 40, 20, 60]
plt.hist(sizes,8,density=True,label=labels)

plt.show()

# 错的