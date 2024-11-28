import matplotlib.pyplot as plt
import numpy as np

# 设置全局字体为黑体，确保能正常显示中文以及设置其他相关的rc参数
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False
plt.rcParams['font.size'] = 13

# 原始数据
y = [50, 30, 40, 20, 60]
x = ['阅读', '练习', '视频学习', '测验', '项目实践']

# 因为雷达图需要角度均匀分布，将x轴标签对应的角度计算出来
# 这里使用linspace生成线性间距的角度数组，范围是从0到2 * np.pi（一个圆周对应的弧度值）
angles = np.linspace(0, 2 * np.pi, len(x), endpoint=False)
# 为了使雷达图能够闭合，将角度数组首尾相连，这是绘制雷达图数据处理的常见操作
angles = np.concatenate((angles, [angles[0]]))

# 同样对y轴数据进行处理，使其首尾相连，方便后续绘制闭合的雷达图
y = np.concatenate((y, [y[0]]))

# 创建一个极坐标子图，用于绘制雷达图（polar参数表示极坐标）
ax = plt.subplot(111, polar=True)

# 绘制雷达图，使用plot函数，传入角度、数据以及设置一些线条相关的属性（如标记等）
ax.plot(angles, y, marker='o', linewidth=1.5, markersize=8)

# 设置每个角度对应的标签，也就是x轴标签在雷达图上的显示
ax.set_thetagrids(angles[:-1] * 180 / np.pi, labels=x)

# 设置雷达图的标题
ax.set_title("学习活动时间分布雷达图")

# 设置雷达图中网格线的样式等属性
ax.grid(True)

# 显示图形
plt.show()