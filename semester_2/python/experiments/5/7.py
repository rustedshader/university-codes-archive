print('Enter Number of items to add in set 1')
s1 = set()
for _ in range(int(input())):
    s1.add(input())
print('Enter Number of items to add in set 2')

s2 = set()
for _ in range(int(input())):
    s2.add(input())

print(s1.intersection(s2))    
print(s1.difference(s2))
print(len(s1) + len(s2))