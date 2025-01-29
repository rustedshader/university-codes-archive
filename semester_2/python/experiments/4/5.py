n: int = int(input("Enter the number: "))
t = n
num = 0
while(t!=0):
    rem = t % 10
    num  = num * 10 + rem 
    t = t//10
print(num)
