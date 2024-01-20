for i in range(100, 1000):
    a = str(i)
    f = i
    b = int(a[0])
    s = int(a[1])
    g = int(a[2])
    sum = b * b * b + s * s * s + g * g * g
    if sum == f:
        print(a,"是水仙花数")
