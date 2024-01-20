goodsList = ["蔬菜", "水果", "豆腐", "养生麦片", "老年奶粉", "玩具", "尿裤",
             "儿童图书", "彩笔", "儿童饼干", "运动饮料", "球拍", "运动水杯", "篮球服", "薯片"]
cart = []
shopper = {"刘红星": ["蔬菜", "水果", "豆腐", "养生麦片", "老年奶粉"], 
            "李强": ["玩具", "尿裤", "儿童图书", "彩笔", "儿童饼干"], 
            "张子涵": ["运动饮料", "球拍", "运动水杯", "篮球服", "薯片"]}
print("欢迎光临，我们商品有：", goodsList)
while True:
    answer = input("请输入你要购买的商品名，完成购物请输入esc:")
    if answer == "esc":
        break
    else:
        cart.append(answer)
name = ""
score = 0
bestScore = 0
for k in shopper:
    for n in shopper[k]:
        if n in cart:
            score = score + 1
    if score > bestScore:
        bestScore = score
        name = k
    score = 0
print(bestScore)
print("最相似的人：", name)
print("----推荐商品----")
for n in shopper[name]:
    if n not in cart:
        print(n)
goodsList = ["蔬菜", "水果", "豆腐", "养生麦片", "老年奶粉", "玩具", "尿裤",
             "儿童图书", "彩笔", "儿童饼干", "运动饮料", "球拍", "运动水杯", "篮球服", "薯片"]
cart = []
shopper = {"刘红星": ["蔬菜", "水果", "豆腐", "养生麦片", "老年奶粉"], 
            "李强": ["玩具", "尿裤", "儿童图书", "彩笔", "儿童饼干"], 
            "张子涵": ["运动饮料", "球拍", "运动水杯", "篮球服", "薯片"]}
print("欢迎光临，我们商品有：", goodsList)
while True:
    answer = input("请输入你要购买的商品名，完成购物请输入esc:")
    if answer == "esc":
        break
    else:
        cart.append(answer)
name = ""
score = 0
bestScore = 0
for k in shopper:
    for n in shopper[k]:
        if n in cart:
            score = score + 1
    if score > bestScore:
        bestScore = score
        name = k
    score = 0
print(bestScore)
print("最相似的人：", name)
print("----推荐商品----")
for n in shopper[name]:
    if n not in cart:
        print(n)
