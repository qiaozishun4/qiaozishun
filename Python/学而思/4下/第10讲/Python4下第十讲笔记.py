# 哆啦A梦 唐三 柯南 鸣人 路飞 佩奇 熊大 梦奇 史蒂夫
# 小丸子 皮卡丘 基德 伍六七 迪迦 喜羊羊 罗小黑 魏无羡
# 派大星 冯宝宝 祢豆子 萧炎 汤姆 荧 马里奥 哈利波特
# 水冰月 悟空 犬夜叉 但丁 图图 可多
import pandas as pd
my_hobby = ["编程", "游戏", "动漫"]
my_friend = ["哆啦A梦", "熊大", "史蒂夫", "皮卡丘", "可多"]

df = pd.read_excel("可能认识的人.xlsx")

max_count = 0
max_name = ""
max_friend = []
hobby_rec = []
friend_rec = []
print("=========根据共同兴趣，推荐用户=========")
for i in range(len(df)):
    data = df.iloc[i]
    name = data["姓名"]
    hobby = data["兴趣"]
    if hobby in my_hobby:
        print("用户：", name)
        hobby_rec.append(name)
    friend = [data["好友1"], data["好友2"], data["好友3"], data["好友4"], data["好友5"], 
              data["好友6"], data["好友7"], data["好友8"], data["好友9"], data["好友10"]]
    
    count = 0
    for n in friend:
        if n in my_friend:
            count = count + 1
    
    if count > max_count:
        max_count = count
        max_name = name
        max_friend = friend
print("最相似的用户为：", max_name)
print("和这位用户的共同好友数：", max_count)
print("ta的好友列表为：", max_friend)

print("=========根据共同好友，推荐用户=========")
print(max_name, "共同好友数：", max_count)
friend_rec.append(max_name)
for n in max_friend:
    if n not in my_friend:
        print(n)
        friend_rec.append(n)

print("=========综合推荐“人类高质量好友”=========")
for n in hobby_rec:
    if n in friend_rec:
        print(n)
