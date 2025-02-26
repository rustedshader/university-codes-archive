import time
x = time.time()
for i in range(1000):
    if i % 5 == 0 and i % 10 == 0 :
        print(i)
print(time.time() - x)