import datetime

print('Enter the date as day month year')
d,m,y = map(int,input().split(" "))
new_d = datetime.date(y,m,d)
print(new_d + datetime.timedelta(1))