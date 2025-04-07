class Maths:
    def add(self, x, y, z):
        return x + y + z

    def add(self, x, y, z, u):
        return x + y + z + u

    def add(self, x, y):
        return x + y


x = Maths()
print(x.add(x.add(10, 20), x.add(12, 15)))
