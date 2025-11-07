import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression, LogisticRegression
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import confusion_matrix, classification_report, accuracy_score


def solve():
    # Step 2: Load dataset
    df = pd.read_csv("creditcard.csv")

    # Step 3: Remove rows containing any NaN values
    df = df.dropna()
    print("After removing NaN, dataset shape:", df.shape)

    # Step 4: Split features & target
    X = df.drop("Class", axis=1)
    y = df["Class"]

    # Step 5: Train-test split
    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=0.20, random_state=23
    )

    # Step 6: Train Logistic Regression model
    model = LogisticRegression(max_iter=3000)
    model.fit(X_train, y_train)

    # Step 7: Predict on test set
    y_pred = model.predict(X_test)

    # Step 8: Evaluation
    print("Accuracy:", accuracy_score(y_test, y_pred))
    print("\nConfusion Matrix:\n", confusion_matrix(y_test, y_pred))
    print("\nClassification Report:\n", classification_report(y_test, y_pred, digits=4))


if __name__ == "__main__":
    solve()
