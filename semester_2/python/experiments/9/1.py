class Students:
    def __init__(self, name, sap_id, marks):
        self.name = name
        self.sap_id = sap_id
        self.marks = marks

    def print_details(self):
        print("-----")
        print("Name of student is", self.name)
        print("SAP ID", self.sap_id)
        for i in range(3):
            print(self.marks[i])
        print("-----")

    def marks_percentage(self):
        for m in self.marks:
            print((m / 100) * 100)

    def display_result(self):
        for m in self.marks:
            if m / 100 > 0.4:
                print("PASS")
            else:
                print("FAIL")


def avg_class(students):
    for k in range(len(students)):
        t = 0
        for i in range(len(students)):
            t += students[i].marks[k]
        print("Average of Class in Subject", k)
        print((t / 300) * 100)


students = []
for _ in range(3):
    name = input("Enter the Name\n: ")
    sap_id = input("Enter the SAP ID\n:  ")
    phy_marks = int(input("Enter the Physics Marks\n: "))
    chem_marks = int(input("Enter the Chem Marks\n: "))
    math_marks = int(input("Enter the Maths Marks\n: "))
    marks = [phy_marks, chem_marks, math_marks]
    students.append(Students(name, sap_id, marks))

for i in range(3):
    students[i].print_details()
    students[i].marks_percentage()
    students[i].display_result()

avg_class(students)
