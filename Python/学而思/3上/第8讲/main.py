from pgzrun import *
WIDTH = 696
HEIGHT = 800

bg = Actor("bg.png")

start = Actor("start.png",[358,626])
pause = Actor("pause.png",[183,550])
change = Actor("change.png",[355,550])
unpause = Actor("unpause.png",[528,550])

def draw():
    bg.draw()
    
num = 1
def on_mouse_down(pos):
    if start.collidepoint(pos):
        music.play("0.mp3")
        bg.image = "bg1.png"
        sounds.button.play()
    elif pause.collidepoint(pos):
        music.pause()
        bg.image = "bg2.png"
        sounds.button.play()
    elif unpause.collidepoint(pos):
        music.unpause()
        bg.image = "bg3.png"
        sounds.button.play()
    elif change.collidepoint(pos):
        global num
        music.play(str(num) + ".mp3")
        num = num + 1
        if num > 4:
          num = 0 
        bg.image = "bg4.png"
        sounds.button.play()
def on_mouse_up():
    bg.image = "bg1.png"
  
go()
