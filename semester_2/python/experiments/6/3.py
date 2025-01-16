l = []
for _ in range(int(input("Enter Number os students to add score: "))):
    l.append(int(input()))
print(*l)
print("Runner Up")
print(sorted(l)[1:][0])