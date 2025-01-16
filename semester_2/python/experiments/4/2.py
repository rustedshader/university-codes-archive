def armstrong_check(n:int ):
    s = 0
    t = n
    while (t!=0):
        rem = t % 10
        s+= rem ** 3
        t = t // 10
    if s == n:
        return True
    return False
print(armstrong_check(153))
