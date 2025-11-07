import pandas as pd
import numpy as np


"""
Convarience:  Describe how much two variable change together.
only tell the direction

Correlation: Describe the strength between the two variables
Linear Realtion
Direction of the realtionship

-1 <= CR <= 1 tak hoti hai
-1 ke paas -> negative correlation
0 ke paas -> no correlation
+1 ke paas -> positive correlation

"""


"""
Pearson Correlation Coefficient


roh(x,y) = cov(x,y)/(std(x)*std(y))

cov(x,y) = sigma (xi-meanx) * (yi - meany)/Total Number of values (N)

Causation -> Relationship  between cause and effect
Ek variable ke change hone se koi aur variable change to nahi ho raha 


"""


def covariance(df):
    x = df[df.columns[1]]
    y = df[df.columns[2]]

    mean_x = sum(x) / len(x)
    mean_y = sum(y) / len(y)

    covariance_sum = 0
    for i in range(len(x)):
        covariance_sum += (x[i] - mean_x) * (y[i] - mean_y)

    covariance_value = covariance_sum / len(x)

    print(f"Mean of Study/day: {mean_x}")
    print(f"Mean of Marks: {mean_y}")
    print(f"Covariance: {covariance_value}")

    return covariance_value


def pearson_correlation(df):
    x = df[df.columns[1]]
    y = df[df.columns[2]]

    mean_x = sum(x) / len(x)
    mean_y = sum(y) / len(y)

    covariance_sum = 0
    for i in range(len(x)):
        covariance_sum += (x[i] - mean_x) * (y[i] - mean_y)
    cov_xy = covariance_sum / len(x)

    sum_sq_x = 0
    for i in range(len(x)):
        sum_sq_x += (x[i] - mean_x) ** 2
    std_x = (sum_sq_x / len(x)) ** 0.5

    sum_sq_y = 0
    for i in range(len(y)):
        sum_sq_y += (y[i] - mean_y) ** 2
    std_y = (sum_sq_y / len(y)) ** 0.5

    # Pearson correlation coefficient: roh(x,y) = cov(x,y)/(std(x)*std(y))
    correlation = cov_xy / (std_x * std_y)

    print(f"Standard deviation of Study/day: {std_x}")
    print(f"Standard deviation of Marks: {std_y}")
    print(f"Pearson Correlation Coefficient: {correlation}")

    return correlation


def solve():
    df = pd.read_csv("covariance_student.csv", delimiter="\t")

    print(df.head())
    print("\n" + "=" * 50)

    # Calculate covariance between Study/day and Marks
    print("Calculating Covariance between Study/day and Marks:")
    cov_result = covariance(df)

    print("\n" + "=" * 50)

    # Calculate Pearson correlation coefficient
    print("Calculating Pearson Correlation Coefficient:")
    corr_result = pearson_correlation(df)

    print("COV RESULT:", cov_result)
    print("CORR RESULT:", corr_result)


if __name__ == "__main__":
    solve()
