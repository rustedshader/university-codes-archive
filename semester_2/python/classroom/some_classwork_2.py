class person:
    name = "durga"
    occupation = "free lancer"
    networth = "10K"

    def info(self):
        print(f"{self.name} is a {self.occupation}")


a = person()
a.name = "ravi"
a.occupation = "Software Developer"
a.info()
