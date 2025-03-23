import random

with open("name.txt", "w") as f:
    for i in range(10):
        f.write(str(random.randint(1,200)) + '\n')

with open("name.txt", "r") as f:
    nums = f.readlines()
    nums = [int(i) for i in nums]
    print(max(nums))
    print()
    print(sum(nums)/len(nums))
    print()
    for num in nums:
        if num > 100:
            print(num)
    


