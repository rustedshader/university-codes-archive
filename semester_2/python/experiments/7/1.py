from cmath import inf


def max(l:list):
    max = -1
    for i in l:
        if i > max:
            max = i
    print(max)

def min(l:list):
    min = inf
    for i in l:
        if i < min:
            min = i
    print(min)

l = [1,2,3,4,5]

max(l)
min(l)
