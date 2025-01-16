def prime(n: int) -> bool:
    for k in range(2,int(n ** 0.5)):
        if n % k == 0:
            return False
    return True

print('Enter the number')
print(prime(int(input())))