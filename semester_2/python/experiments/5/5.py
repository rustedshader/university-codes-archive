print("Enter the string and character to find")
s,c = map(str,input().split(" "))
print(s.lower().count(c.lower()))
