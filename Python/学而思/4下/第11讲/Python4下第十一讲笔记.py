import easygui as g
from random import *

money = 1000  # 资产
happy = 200  # 快乐
power = 200  # 能力
health = 200 # 健康
i = -1

name = g.enterbox("请输入你的姓名")

g.msgbox(
    msg="姓名："+name,
    title="创建成功",
    image="人物.png",
    ok_button="准备开启模拟人生"
    )

while True:
    bad = randint(0, 50)
    rand_day = randint(0,8)
    i += 1
    day = g.buttonbox(
        msg="欢迎！今天是第" + str(i+1) + "天，请做出你今天的选择吧！\n\n"+"\n\n健康："+str(health)+"\n\n快乐："+str(happy)+"\n\n能力："+str(power)+"\n\n资产："+str(money),
        title="模拟经营游戏",
        choices=["工作", "学习", "娱乐", "运动", "投资", "偷钱", "买彩票", "退出"]
    )
    if day == "工作":
        lucky2 = randint(0, 8)
        if lucky2 == 6:
            money = money + 10000
            g.msgbox("你工作上被领导表扬，获得了奖金10000块！")
        if power < 250:
            money = money + 250
            power = power + 5
            happy = happy - 5
            health = health - 5
            g.msgbox("你勤劳地工作了一整天，资产+250，能力+5，快乐-5，健康-5，账户余额"+str(money),image="工作.png")
        elif power < 450:
            money = money + 600
            power = power + 10
            happy = happy - 4
            health = health - 4
            g.msgbox("你勤劳地工作了一整天，资产+600，能力+10，快乐-4，健康-4，账户余额"+str(money),image="工作.png")
        else:
            money = money + 800
            power = power + 15
            happy = happy - 3
            health = health - 3
            g.msgbox("你勤劳地工作了一整天，资产+800，能力+15，快乐-3，健康-3，账户余额"+str(money),image="工作.png")
    elif day == "学习":
        money = money - 50
        power = power + 15
        g.msgbox("你在图书馆努力学习了一整天，资产-50，能力+15，账户余额"+str(money),image="学习.png")
    elif day == "娱乐":
        money = money - 150
        happy = happy + 10
        g.msgbox("你去游乐园玩了一天，资产-150，快乐+10，账户余额"+str(money),image="娱乐.png")
    elif day == "运动":
        money = money - 100
        happy = happy + 10
        power = power + 5
        health = health + 10
        g.msgbox("你去公园锻炼了一天，资产-100，快乐+10，能力+5，健康+10，账户余额"+str(money),image="运动.png")
    elif day == "投资":
        if power < 140:
            money = money + randint(-200, 400)
        elif power < 200:
            money = money + randint(-100, 600)
        elif power < 300:
            money = money + randint(-1, 800)
        elif power < 400:
            money = money + randint(-1, 1000)
        elif power < 500:
            money = money + randint(-1, 1200)
        elif power < 600:
            money = money + randint(-1, 1400)
        elif power < 700:
            money = money + randint(-1, 1600)
        power = power + 5
        health = health - 5
        g.msgbox("你今天选择投资，能力+5，健康-5，账户余额"+str(money),image="投资.png")
    elif day == "偷钱":
        lucky = randint(0, 5)
        if lucky == 1:
            money = money - 3000
            happy = happy - 5
            g.msgbox("你偷钱被FBI发现了！！资产-3000，快乐-5")
        else:
            money = money + 5000
            happy = happy + 10
            g.msgbox("你偷盗成功！资产+5000，快乐+10")
    elif day == "买彩票":
        lucky3 = randint(0, 1)
        if lucky3 == 1:
            lucky4 = randint(1, 3)
            if lucky4 == 1:
                money = money + 50000
                happy = happy + 60
                health = health + 80
                g.msgbox("你中了一等奖！资产+50000，快乐+60，健康+80")
            elif lucky4 == 2:
                money = money + 10000
                happy = happy + 30
                health = health + 50
                g.msgbox("你中了二等奖！资产+10000，快乐+30，健康+50")
            else:
                money = money + 5000
                happy = happy + 10
                health = health + 30
                g.msgbox("你中了三等奖！资产+5000，快乐+10，健康+30")
        else:
            money = money - 20
            happy = happy - 5
            g.msgbox("居然没中奖！资产-20，快乐-5")
    else:
        break
    
    if happy <= 0 or health <= 0:
        g.msgbox("游戏结束！需要关注身心健康。")
        break
    if money <= 0:
        g.msgbox("你破产了")
        break
    if rand_day == 0:
        w = g.buttonbox(
                  msg="在路上捡到一个钱包",
                  title="随机事件",
                  choices=["占为己有", "归还失主"])
        if w == "占为己有":
            g.msgbox("这样是不道德的！资产+1000，能力-50，快乐-50")
            money = money + 1000
            happy = happy - 50
            power = power - 50
        elif w == "归还失主":
            g.msgbox("失主对你表示感谢！快乐+20，能力+20，健康+30")
            happy = happy + 20
            power = power + 20
            health = health + 30
    if rand_day == 3:
        g.msgbox(
                  msg="收到红包！快乐+30，健康+20，资产+1000",
                  title="随机事件",
                  ok_button="收下")
        happy = happy + 30
        health = health + 40
        money = money + 1000
    if rand_day == 5:
        g.msgbox(
                  msg="你走路掉进了井里！快乐-2，健康-5，资产-500",
                  title="非常倒霉的事件",
                  ok_button="好吧")
        happy = happy - 2
        health = health - 5
        money = money - 500
    if rand_day == 7:
        g.msgbox(
                  msg="你的钱包被偷了！快乐-10，资产-800",
                  title="非常倒霉的事件",
                  ok_button="好吧")
        happy = happy + 30
        health = health + 40
        money = money + 1000
    if bad == 32:
        g.msgbox(
                  msg="你得了很严重的胃病，资产-8000",
                  title="非常倒霉的事件",
                  ok_button="收下")
        money = money - 8000
    if bad == 8:
        g.msgbox(
            msg="你被one杀死了",
            title="非常倒霉的事件")
        break
    if money >= 1000000:
        g.msgbox("赚到100万，游戏结束")
        break
score = health * 0.3 + happy * 0.2 + power * 0.2 + money * 0.01
g.msgbox("游戏结束！经过综合测算，你的最终得分为："+str(score)+"\n\n你的战绩：\n\n"+"\n\n健康："+str(health)+"\n\n快乐："+str(happy)+"\n\n能力："+str(power)+"\n\n资产："+str(money))
