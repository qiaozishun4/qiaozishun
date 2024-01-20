from random import *
from pgzrun import *
music.play("bgm.mp3")
WIDTH = 900
HEIGHT = 756

bg = Actor("bg.png")
start = Actor("start.png",[319,585])
end = Actor("end.png",[573,585])

lucklist = ["可多", "兰朵", "卡普", "爆钻"]

winner = ""

def luck():
    global winner
    winner = choice(lucklist)
    sounds.start.play()

def draw():
    bg.draw()
    screen.draw.text(winner, fontname="ziti.ttf", fontsize=80, center=(445, 445), color = "black")
    

def on_mouse_down(pos):
    global winner
    if start.collidepoint(pos):
        clock.schedule_interval(luck,0.1)
        bg.image = "bg.png"
        
    elif end.collidepoint(pos):
        clock.unschedule(luck)
        bg.image = "win.png"
        sounds.win.play()


go()
