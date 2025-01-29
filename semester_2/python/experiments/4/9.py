for i in range(1,101):
    if i % 2 != 0:
        isPrime: bool = True
        for k in range(2,int(i**0.5) + 1):
            if i % k == 0:
                isPrime = False
                break
        if isPrime:
            print(i)
