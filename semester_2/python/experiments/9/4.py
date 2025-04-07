# Method Overiding


class MathFunctions:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def add(self):
        print(self.a - self.b)


class Maths(MathFunctions):
    def __init__(self, a, b):
        self.a = a
        self.b = b
        super().__init__(a, b)

    def add(self):
        print(self.a + self.b)


x = Maths(5, 6)
x.add()
