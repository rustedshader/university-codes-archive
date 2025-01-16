print("Enter the year")
year: int = int(input())
if year % 4 == 0 and (year % 100 == 0 and year % 400 == 0)  != 0:
    print(True)
else:
    print(False)