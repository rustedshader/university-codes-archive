class Student:
    def __init__(self, name, roll_no, marks):
        self.name = name
        self.roll_no = roll_no
        self.marks = marks

    def avg(self):
        t = 0
        cs = len(self.marks * 100)
        for marks in self.marks:
            t += marks
        print((t / cs) * 100)


for _ in range(2):
    x = Student(
        input("Enter Name\n: "),
        int(input("Enter Roll Number\n: ")),
        list(map(int, input("Enter the marks\n: ").split(" "))),
    )
    x.avg()
