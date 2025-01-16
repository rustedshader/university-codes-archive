print("Enter the two numbers a b")
a,b = map(int,input().split(" "))
if a > b:
    print(a)
elif a<b:
    print(b)
else:
    print("numbers are equal")