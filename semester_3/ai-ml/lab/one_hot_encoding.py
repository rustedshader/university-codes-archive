import pandas as pd


def solve():
    df = pd.read_excel("student_dream.xlsx")

    df_encoded = pd.get_dummies(df, dtype=int)

    print(df_encoded)


if __name__ == "__main__":
    solve()
