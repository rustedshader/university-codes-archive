n = int(input())
s = 0
t = n
while (t!=0):
    rem = t % 10
    s += rem ** 3
    t = t // 10

if s == n:
    print(True)
else:
    print(False)
