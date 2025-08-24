# WAP in python for a defination which will return square of a values


def square(num: int):
    return num**2


# WAP in python which will find that given string contain a substring


def find_substring(s: str, substr: str):
    if substr in s:
        return True
    return False


# Read a Table (Excel File) from a given path
def pandas_q():
    import pandas as pd

    dt = pd.read_excel("main.xlsx")

    print("Number of columns:", len(dt.columns))
    print("Number of rows:", len(dt.index))


if __name__ == "__main__":
    print(square(5))
    print(find_substring("shubhang", "sa"))
    pandas_q()
