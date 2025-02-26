total_marks: int = int(input("Enter the maximum marks of the subject: ")) * 5
marks_obtained: int = 0
for i in range(5):
    marks_obtained += int(input(f"Enter the marks of Subject {i+1}: "))

percentage: float = (marks_obtained / total_marks) * 100
c: float = percentage/10

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
