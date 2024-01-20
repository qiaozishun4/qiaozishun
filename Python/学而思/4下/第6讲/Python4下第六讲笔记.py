import easygui as g
from xes.tool import *
path = xopen("私密")

g.msgbox("欢迎使用我的日记本程序", image="login.png")
choice = g.buttonbox("读日记还是写日记？", choices=("读取", "写入"))
if choice == "读取":
    
    file_name = path + "日记.txt"
    with open(file_name, "r", encoding="UTF-8") as file:
        new = file.read()
    
    text = ""
    for n in new:
        num = ord(n) - 5
        text = text + chr(num)
    
    g.msgbox("解密成功！加密前的文本为：\n\n"+text)

else:

    text = g.textbox(
            msg="请书写内容",
            title="私密日记本"
            )
    
    new = ""
    for n in text:
        num = ord(n) + 5
        new = new + chr(num)
    
    file_name = path + "日记.txt"
    with open(file_name, "w", encoding="UTF-8") as file:
        file.write(new)
    
    g.msgbox("加密成功！加密后的文本为：\n\n"+new+"\n\n\n\n加密内容已保存到"+file_name)
