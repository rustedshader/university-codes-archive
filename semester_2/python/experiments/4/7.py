count: int = 0
for i in range(1,101): 
    if i % 5 == 0 or i % 7 == 0:
        print(i)
        count+=1
print()
print('Total number divisible by 5 and 7 between 1 - 100',count)
