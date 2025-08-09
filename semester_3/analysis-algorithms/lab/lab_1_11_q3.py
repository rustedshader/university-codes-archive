def b_search(L: int , R: int , arr: list,x: int):
    if R-L+1 < 1:
        return

    M = (R+L)//2

    if x < arr[M]:
        return b_search(L,M-1,arr,x)
    elif x > arr[M]:
        return b_search(M+1,R,arr,x) 
    else:
        return M

arr = [x for x in range(0,101)]
print(b_search(0,len(arr),arr,int(input())))
