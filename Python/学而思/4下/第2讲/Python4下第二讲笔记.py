from snownlp import SnowNLP
from pyecharts.charts import Bar

c = Bar()

for i in range(1, 4):
    good = 0
    soso = 0
    bad = 0
    total = 0
    txt = "data" + str(i) + ".txt"
    with open(txt, "r", encoding="UTF-8") as file:
        for line in file:
            result = SnowNLP(line).sentiments
            if result <= 0.33:
                bad += 1
            elif result <= 0.66:
                soso += 1
            else:
                good += 1
            total += 1
    good = round(good / total, 2)
    soso = round(soso / total, 2)
    bad = round(bad / total, 2)
    print("视频" + str(i) + "的评价率统计：")
    print("good = ", str(good))
    print("soso = ", str(soso))
    print("bad = ", str(bad))
    result = [good, soso, bad]
    c.add_yaxis("视频" + str(i), result)
c.add_xaxis(["好评", "中评", "差评"])
c.render("视频的评价对比.html")
