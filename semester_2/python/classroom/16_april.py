# import pandas as pd
# import numpy as np


# class SalesAgent:
#     def __init__(self, name: str, region: str, quaterly_sales: np.array):
#         self.name = name
#         self.region = region
#         self.quaterly_sales = quaterly_sales

#     def total_sales(self):
#         return sum(self.quaterly_sales)


# df = pd.DataFrame()

# agent = []

# pp = input("Enter the name\n: ")
# aa = input("Enter the region\n: ")
# ff = []
# for i in range(4):
#     ff.append((int(input(f"Enter the sale for quarter {i}\n: "))))
# print(pp, aa, np.array(ff))


# # KEY ERROR

# quit()
import random
import string

# print(str(random.randint(1000000000, 9999999999)) + random.sample(string.ascii_letters))

random.seed(5)
print(random.randint(1, 6))
