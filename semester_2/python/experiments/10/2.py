import numpy as np


arr = np.random.randint(1, 100, size=(3, 3))

# Sum of all rows
s_r = np.sum(arr,axis=0)

# Sum of all columns
s_c = np.sum(arr,axis=1)

# Second Max Element of the array

s_sa = np.sort(arr)

print(s_r)
print(s_c)
flattened = arr.flatten()
print(flattened[-2])
