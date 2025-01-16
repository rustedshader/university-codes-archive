print("Enter a b c")
a,b,c = map(int,input().split(" "))
if (b**2 - 4*a*c) > 0:
    print("Real Roots")
else:
    print("Imaginary Roots")