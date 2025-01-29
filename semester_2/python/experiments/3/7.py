import datetime

d,m,y = map(int,input("Enter the date as day month and year: ").split(" "))
new_d = datetime.date(y,m,d)
print(new_d + datetime.timedelta(1))
