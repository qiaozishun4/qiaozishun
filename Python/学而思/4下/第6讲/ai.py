from xes import aiBase
import requests
name = ""
'''
cartoon：卡通画风格
pencil：铅笔风格
color_pencil：彩色铅笔画风格
warm：彩色糖块油画风格
wave：神奈川冲浪里油画风格
lavender：薰衣草油画风格
mononoke：奇异油画风格
scream：呐喊油画风格
gothic：哥特油画风格
'''
def image_style_trans(name, style):
    if name == "":
        raise Exception("图片不能为空")

    image_url = aiBase.uploadFile(name)

    api = "https://code.xueersi.com/api/ai/b/style_trans"
    params = {
        "url": image_url,
        "style": style
    }
    rep = aiBase.request(api, params)
    url = rep["data"]["res"]["url"]
    img = requests.get(url).content
    with open(style+name, "wb") as f:
        f.write(img)
        
