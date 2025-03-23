import pandas as pd
file = pd.read_csv('/Users/shubhang/Documents/student_scores.csv')
print(len([score for score in file['Score'] if int(score) > 85]))

identify = lambda file: ['Good' if int(score) > 80 else 'Poor' for score in file['Score']]

x = identify(file)
print(x)

