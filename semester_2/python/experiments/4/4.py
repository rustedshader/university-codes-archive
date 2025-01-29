n: int = int(input("Enter the number "))
isPrime: bool = True
for i in range(2,int(n**0.5) + 1):
    if n % i == 0:
        isPrime = False
        break

if n <= 1:
    isPrime = False

if isPrime:
    print("Number is Prime")
else:
    print("Number is not Prime")
