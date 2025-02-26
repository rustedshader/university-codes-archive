import string
# x = [[[1],[2],[3]]] * 3
# for i in range(3): print(x[i])
x,y = 3,3
arr = [87,21,34,89,32,78,12,23,45]
arr.sort()
m = 0
for i in range(y):
    print(*arr[m:y])
    y+=3
    m+=3
