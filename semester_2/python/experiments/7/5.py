import math
n,h = map(float,input().split(" "))
x: float = lambda n,h : math.pi * n**2 * h/3
print(x(n,h))