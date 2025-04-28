import pandas as pd
import numpy as np

data = { 'X': [ 1,2,3] , 'Y': [1,2,np.nan]}

df = pd.DataFrame(data)

print(df)

df['X'] = df['X'].fillna(30)
df['Y'] = df['Y'].fillna(30)

print(df)

