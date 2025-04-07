# Normal Inheritance
class Vechile:
    def __init__(self, type, mileage):
        self.type = type
        self.mileage = mileage


class Car(Vechile):
    def __init__(self, type, mileage, name):
        super().__init__(type, mileage)
        self.name = name

    def print_car_details(self):
        print("Car Type", self.type)
        print("Car Mileage", self.mileage)
        print("Car Name", self.name)


# Multiple Inheritance
class Parent1:
    def method1(self):
        print("Method 1 from Parent1")


class Parent2:
    def method2(self):
        print("Method 2 from Parent2")


class Child(Parent1, Parent2):
    def method3(self):
        print("Method 3 from Child")


# MultiLevel Inheritance


class Base:
    def method1(self):
        print("Method 1 from Base")


class Derived(Base):
    def method2(self):
        print("Method 2 from Derived")


class SubDerived(Derived):
    def method3(self):
        print("Method 3 from SubDerived")
