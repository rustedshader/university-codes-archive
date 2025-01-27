a,b,c = map(int,input("Enter the sides a b c: ").split(" "))
sp:float = 0.5 * (a+b+c)
# Herons Forumla -> Area = underoot semi peramiter*sp-a*sp-b*sp-c
print((sp*(sp-a)*(sp-b)*(sp-c)) ** 0.5)