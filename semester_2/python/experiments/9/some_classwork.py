"""
You have to create a car class
Attributes having brand , model and year

object to fetch details of the car


Bank Account
Account Holder and Balance
Create an account , deposit some money, withdraw some money and display the final ammount
"""


class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def print_details(self):
        print("Car Brand", self.brand)
        print("Car Model", self.model)
        print("Car Year", self.year)


Car("Mercedes", "X3", 2025).print_details()
Car("Audi", "Q3", 2025).print_details()


class Bank_Account:
    def __init__(self, account_holder_name):
        self.account_holder_name = account_holder_name
        self.account_balance = 0

    def __add__(self, amount):
        return self.account_balance + amount

    def __sub__(self, amount):
        return self.account_balance - amount

    def __deposit(self, amount):
        self.account_balance = self.__add__(amount)

    def __withdraw(self, amount):
        self.account_balance = self.__sub__(amount)

    def deposit(self, amount):
        # HERE WE CAN CHECK USER IDENTITY
        self.__deposit(amount)

    def withdraw(self, amount):
        if self.__sub__(amount) < 0:
            print("You Don't have Sufficient Balance")
            self.display_balance()
        else:
            # HERE WE CAN CHECK USER IDENTITY
            self.__withdraw(amount)

    def display_balance(self):
        print("This is your account Balance:", self.account_balance)


shubhang_account = Bank_Account("Shubhang")
shubhang_account.deposit(100)
shubhang_account.withdraw(10)
shubhang_account.display_balance()
