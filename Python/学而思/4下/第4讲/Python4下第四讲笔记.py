from math import gcd
num = int(input())
num2 = int(input())
g = gcd(num, num2)
l = int(num * num2 / g)
print(g, l)
