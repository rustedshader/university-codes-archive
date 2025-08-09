def solve(n):
    if n < 0:
        return 0

    if n==0 or n == 1 or n == 2:
        return 1

    t = [0] * (n+1)

    t[0] = 1
    t[1] = 1
    t[2] = 1

    for i in range(3,n+1):
        t[i] = t[i-2] + t[i-3]
    
    return t[n]



if __name__ == '__main__':
    print(solve(5))
