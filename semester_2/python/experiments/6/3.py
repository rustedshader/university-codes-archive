l = []
for _ in range(int(input("Enter Number os students to add score: "))):
    l.append(int(input()))
print(*set(l))
print("Runner Up")
print( sorted(set(l))[::-1][1] )