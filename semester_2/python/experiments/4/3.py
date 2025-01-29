n: int = int(input())
a: int = 0
b: int = 1
c: int = a+b
print()
print(a)
print(b)
for i in range(n-2):
    print(c)
    a = b
    b = c 
    c = a+b
