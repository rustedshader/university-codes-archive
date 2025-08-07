def binary_search(arr,x):
    l = -1
    r = len(arr)

    while r > l+1:
        m = (l+r)//2
        if arr[m] >= x:
            r = m
        else:
            l = m
    return r

def b_search(arr,x):
    l = 0
    r = len(arr) 

    while r - l + 1 > 1:
        m = (l+r)//2

        if x < arr[m]:
            r = m-1
        elif x > arr[m]:
            l = m + 1
        else:
            return m

def b_rec(arr,x,l,r):
    if r - l + 1 < 1:
        return 

    m = (l+r) // 2
    if x > arr[m]:
        return b_rec(arr,x,m+1,r)
    elif x < arr[m]:
        return b_rec(arr,x,l,m-1)
    else:
        return m

if __name__ == '__main__':
    arr = [1,2,3,4,5]
    x = 1
    print(binary_search(arr,x))
    print(b_rec(arr,x,0,4))
    print(b_search(arr,x))
