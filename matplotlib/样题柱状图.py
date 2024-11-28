import matplotlib.pyplot as plt

plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['font.size'] = 14
x = ['阅读','练习','视频学习','测验','项目实践']
y = [50,30,40,20,60]
plt.bar(x,y)

plt.xlabel("学习活动")
plt.ylabel("时间/小时")
plt.show()