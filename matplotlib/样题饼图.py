import matplotlib.pyplot as plt

plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['font.size'] = 14

plt.title("学生活动时间分布")
labels = ['阅读', '练习', '视频学习', '测验', '项目实践']
sizes = [50, 30, 40, 20, 60]

plt.pie(sizes, labels=labels, autopct='%1.1f%%', shadow=False, startangle=90)
plt.show()
