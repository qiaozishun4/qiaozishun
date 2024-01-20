import pandas as pd
from pyecharts.charts import Bar
from pyecharts.charts import Timeline
# 初始化轮播图
t = Timeline()

df = pd.read_excel("GDP数据.xlsx")
for i in range(1960, 2021):
    data = df[df["年份"] == i].head(10)
    print(data)
    # 初始化
    c = Bar()
    # 添加数据
    name = list(data["国家"])
    gdp = list(data["GDP"])
    c.add_xaxis(name)
    c.add_yaxis("GDP(亿美元)", gdp)
    #TODO 向轮播图t中添加图表和时间
    # 格式：t.add(图表, 年份)
    t.add(c, i)
    # 生成轮播图文件
    t.render("GDP排名.html")
