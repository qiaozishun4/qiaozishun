print("如果没有安装wxPython，则无法运行")
import wx
import random

class MathGame(wx.Frame):
    def __init__(self, parent, title):
        super(MathGame, self).__init__(parent, title=title, size=(300, 200))

        self.panel = wx.Panel(self)
        
        self.question_label = wx.StaticText(self.panel, label="Question:")
        self.answer_label = wx.StaticText(self.panel, label="Answer:")
        
        self.question_text = wx.TextCtrl(self.panel, style=wx.TE_READONLY)
        self.answer_input = wx.TextCtrl(self.panel)
        
        self.check_button = wx.Button(self.panel, label="Check")
        self.check_button.Bind(wx.EVT_BUTTON, self.on_check)
        
        self.next_button = wx.Button(self.panel, label="Next")
        self.next_button.Bind(wx.EVT_BUTTON, self.on_next)
        
        self.score_label = wx.StaticText(self.panel, label="Score:")
        self.score_text = wx.StaticText(self.panel, label="0")
        
        self.layout_controls()
        
        self.generate_question()
        
        self.score = 0
        
    def layout_controls(self):
        vbox = wx.BoxSizer(wx.VERTICAL)
        
        hbox1 = wx.BoxSizer(wx.HORIZONTAL)
        hbox1.Add(self.question_label, flag=wx.RIGHT, border=10)
        hbox1.Add(self.question_text, proportion=1)
        
        hbox2 = wx.BoxSizer(wx.HORIZONTAL)
        hbox2.Add(self.answer_label, flag=wx.RIGHT, border=10)
        hbox2.Add(self.answer_input, proportion=1)
        
        hbox3 = wx.BoxSizer(wx.HORIZONTAL)
        hbox3.Add(self.check_button, flag=wx.RIGHT, border=10)
        hbox3.Add(self.next_button)
        
        hbox4 = wx.BoxSizer(wx.HORIZONTAL)
        hbox4.Add(self.score_label, flag=wx.RIGHT, border=10)
        hbox4.Add(self.score_text)
        
        vbox.Add(hbox1, flag=wx.EXPAND | wx.LEFT | wx.RIGHT | wx.TOP, border=10)
        vbox.Add(hbox2, flag=wx.EXPAND | wx.LEFT | wx.RIGHT, border=10)
        vbox.Add(hbox3, flag=wx.ALIGN_CENTER | wx.TOP | wx.BOTTOM, border=10)
        vbox.Add(hbox4, flag=wx.ALIGN_RIGHT | wx.RIGHT | wx.BOTTOM, border=10)
        
        self.panel.SetSizer(vbox)
        
    def generate_question(self):
        # 生成一个简单的加法题目
        a = random.randint(1, 10)
        b = random.randint(1, 10)
        self.question_text.SetLabel(f"{a} + {b} =")
        self.correct_answer = a + b
        
    def on_check(self, event):
        user_answer = int(self.answer_input.GetValue())
        if user_answer == self.correct_answer:
            self.score += 1
            wx.MessageBox("Correct!", "Result", wx.OK | wx.ICON_INFORMATION)
        else:
            wx.MessageBox("Incorrect!", "Result", wx.OK | wx.ICON_ERROR)
        self.score_text.SetLabel(str(self.score))
        self.answer_input.Clear()
        
    def on_next(self, event):
        self.generate_question()
        

app = wx.App()
game = MathGame(None, title="Math Game")
game.Show()
app.MainLoop()
