print('Enter the CGPA')
c = float(input())
if c >= 3.5 and c <=5.0:
    print("C+")
elif c >= 5.1 and c <= 6.0:
    print("B")
elif c >= 6.1 and c <=7.0:
    print("B+")
elif c >= 7.1 and c <=8.0:
    print("A")
elif c >= 8.1 and c <=9.0:
    print("A+")
elif c >= 9.1 and c <=10.0:
    print("O")
else:
    print("Invalid CGPA")