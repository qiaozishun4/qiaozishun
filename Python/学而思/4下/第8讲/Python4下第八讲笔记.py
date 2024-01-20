music1 = {"It's My Life": "摇滚", "成都": "民谣", "雨中漫步": "轻音乐","In the end": "摇滚", "理想三旬": "民谣", "故乡的原风景": "轻音乐" ,
                 "Numb": "摇滚", "云烟成雨": "民谣", "梦中的婚礼": "轻音乐","无地自容": "摇滚", "米店": "民谣", "清晨": "轻音乐"}
music2 = {"摇滚": ["My December", "High Voltage"],
          "民谣": ["南山南", "斑马，斑马"],
          "轻音乐": ["献给爱丽丝", "安妮的仙境"]}
like = []
bestScore = 0
bestLabel = ""
print("------开始训练------")
for n in music1:
    answer = input(n+"  是否喜欢？ y/n?")
    if answer == "y":
        like.append(music1[n])
print("------训练完毕，开始推荐-----")
for label in like:
    score = like.count(label)
    if score>bestScore:
        bestScore = score
        bestLabel = label
print(bestLabel, score)
print("---------推荐歌曲为---------------")
for n in music2[bestLabel]:
    print(n)
print("推荐指数为", bestScore)
