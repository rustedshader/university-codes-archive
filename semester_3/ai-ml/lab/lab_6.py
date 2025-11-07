import pandas as pd
from matplotlib import pyplot as plt


def outliers(data, column_name):
    # Mean Value lo aur fir usse jo bahut zada deviate ho vo outliers honge
    # Mean ki line se kafi upar ya niche jo points honge vo outliers honge. ie IQR Line
    # IQR -> Inter Quaterline Range
    # Quaterile -> Median
    # 0 -> Min
    # 25 -> Q1
    # 50 -> Q2 (Median)
    # 75 -> Q3
    # 100 -> Max
    # IQR = Q3 - Q1
    # Outliers = (Q1 - [~1.5 * (IQR)], Q3 + [~1.5 * (IQR)])

    # Calculate Q1, Q3, and IQR
    Q1 = data[column_name].quantile(0.25)
    Q3 = data[column_name].quantile(0.75)
    IQR = Q3 - Q1

    lower_bound = Q1 - 1.5 * IQR
    upper_bound = Q3 + 1.5 * IQR

    outlier_mask = (data[column_name] < lower_bound) | (data[column_name] > upper_bound)
    outliers_data = data[outlier_mask]

    print(f"\nOutlier Detection for column '{column_name}':")
    print(f"Q1: {Q1:.2f}")
    print(f"Q3: {Q3:.2f}")
    print(f"IQR: {IQR:.2f}")
    print(f"Lower Bound: {lower_bound:.2f}")
    print(f"Upper Bound: {upper_bound:.2f}")
    print(f"Number of outliers found: {len(outliers_data)}")

    print(f"Outlier values: {outliers_data[column_name].tolist()}")
    print(f"Outlier indices: {outliers_data.index.tolist()}")

    return outliers_data


def solve():
    # 1. Load the dataset and show the first 10 rows.
    df = pd.read_excel("Student Data.xlsx")
    print("First 10 rows", df.head(10))

    # 2. Display the number of rows and columns.
    print("Number of rows", df.shape[0])
    print("Number of columns", df.shape[1])

    # 3. Check for missing values in each column.
    print("Missing values in each column", df.isnull().sum())

    # 4. Show the summary statistics (mean, median, mode, standard deviation).
    cc = []
    for cols in df.columns:
        if df[cols].dtype == "int64" or df[cols].dtype == "float64":
            cc.append(cols)
    sub_df = df[cc]

    print(sub_df.mean())
    print(sub_df.median())
    print(sub_df.mode())
    print(sub_df.std())

    # 5. Find the column with the maximum and minimum values.

    max_col = sub_df.idxmax(axis=0)
    min_col = sub_df.idxmin(axis=0)

    print("Maximum Value Column", max_col)
    print("Minimum Value Column", min_col)

    # 6. Count how many unique values each categorical column has.
    print(df.nunique())

    # 7. Plot a histogram for any numeric column.
    numeric_col = sub_df["age"]
    plt.hist(numeric_col, bins=5)
    plt.show()

    # 8. Create a bar plot showing frequency of categories in one categorical column.
    categorical_cols = df.select_dtypes(include=["object", "category"]).columns
    cat_col = categorical_cols[0]
    df[cat_col].value_counts().plot(kind="bar")
    plt.title(f"Frequency of categories in {cat_col}")
    plt.xlabel(cat_col)
    plt.ylabel("Frequency")
    plt.show()

    # 9. Make a scatter plot between two numerical columns.
    plt.scatter(sub_df[cc[0]], sub_df[cc[1]])
    plt.title(f"Scatter plot between {cc[0]} and {cc[1]}")
    plt.xlabel(cc[0])
    plt.ylabel(cc[1])
    plt.show()

    # 10. Detect outliers in one numerical column using boxplot.
    outlier_data = outliers(sub_df, cc[0])

    plt.boxplot(outlier_data)
    plt.title(f"Boxplot for {cc[0]}")
    plt.ylabel(cc[0])
    plt.show()


if __name__ == "__main__":
    solve()
