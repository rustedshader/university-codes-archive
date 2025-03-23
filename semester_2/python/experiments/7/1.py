from cmath import inf

def max_(l:list) -> None:
    max = -1
    for i in l:
        if i > max:
            max = i
    print(max)

def min_(l:list) -> None:
    min = inf
    for i in l:
        if i < min:
            min = i
    print(min)

l = [1,2,3,4,5]

max_(l)
min_(l)
