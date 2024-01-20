'''
中文代码教程：
1.常用函数对照表（将后面对应的汉字当成函数调用即可）：
abs -------------- 绝对值   （调用方法：有参数：函数名(参数)，无参数：函数名()以此类推）
input -------------- 输入
int -------------- 转化为数值
print -------------- 输出
str -------------- 转化为字符串
len -------------- 长度

2.random库：
randint -------------- 随机数
random -------------- 随机实数

3.time库：
strftime -------------- 获取时间
sleep -------------- 等待

4.sys库：
exit -------------- 退出

5.os库
system -------------- 系统

6.webbrowser库
open -------------- 打开网页
'''

















from random import *
from time import *
from sys import*
from os import *
from webbrowser import *
#TODO 常用内置函数：
def 绝对值(x):                                                #a
    return abs(x)
def 输入(x):                                                  #i
    input(x)
def 转化为数值(x):
    return int(x)
def 长度(x):                                                  #l
    return len(x)
def 输出(x):                                                  #p
    print(x)

def 转化为字符串(x):                                          #s
    return str(x)


#TODO random:
def 随机数(a,b):
    return randint(a,b)
def 随机实数():
    return random()
#TODO time:
def 获取时间(x):
    return strftime(x)
def 等待(秒):
    sleep(秒)

#TODO sys:
def 停止程序():
    exit()

#TODO os:
def 系统(x):
    system(x)

#TODO webbrowser:
def 打开网页(x):
    open(x)
    
del random
del time
