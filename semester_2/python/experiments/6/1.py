l = [1,2,3,4,5,6,2,3,2,1,3,4]
s = {}
for num in set(l):
    if 0<=num<=3:
        s[num] = l.count(num)
print(s)