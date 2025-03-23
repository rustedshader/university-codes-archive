def sf(n: int) -> None:
    if n<0:
        return -1
    s = 0
    for i in range(n,0,-1):
        s+=i**3
    print(s)

sf(10)