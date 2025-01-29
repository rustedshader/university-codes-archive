a,b,c = map(int,input("Enter a b c: ").split(" "))
root_one = (-b + ((b**2 - (4*a*c)) ** 0.2))/ 2 * a
root_two = (-b - ((b**2 - (4*a*c)) ** 0.2))/ 2 * a

print('Roots are:',root_one,root_two)

if (b**2 - 4*a*c) > 0:
    print("Real Roots")
else:
    print("Imaginary Roots")

