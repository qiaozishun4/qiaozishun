text = "ĚņíĽĮŀŀńļĿıíĶŀíĳļłĿíĻłĺįĲĿŀûġĵĲíĳĶĿŀŁíĻłĺįĲĿíĽĹłŀíþíĶŀíĀùŁĵĲíŀĲİļĻıíĻłĺįĲĿíĺĲĮĻŀíĻļŁĵĶĻĴùŁĵĲíŁĵĶĿıíĻłĺįĲĿíĶŀíĿĲŃĲĿŀĲıíŁļíįĲíĆùĮĻıíŁĵĲíĳļłĿŁĵíĻłĺįĲĿíĶŀíŁĵĲíŀłĺíļĳíŁĵĲíĳĶĿŀŁíŁĵĿĲĲíĻłĺįĲĿŀû"

times = {}
for n in text:
    t = text.count(n)
    print(n, t)
    times[n] = t
print(times)

max_char = max(times, key=times.get)
c = ord(max_char) - ord(" ")
new = ""
for n in text:
    num = ord(n) - c
    new = new + chr(num)
print(new)
