def prime(n: int) -> bool:
    for k in range(2,int(n ** 0.5)):
        if n % k == 0:
            return False
    return True
for i in range(1,101):
    if i % 2 != 0:
        if prime(i):
            print(i)
        

        
        