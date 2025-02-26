print('Enter string')
count:int = 0
for k in input():
    if k.lower() is 'a' or 'e' or 'i' or 'o' or 'u':
        count += 1
print(count)
