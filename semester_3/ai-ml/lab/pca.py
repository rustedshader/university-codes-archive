"""
MY NOTES

PCA: Principal Component Analysis

Reduction technique used to reduce the dimensionality of data. Used in unsupervised learning.

Steps to find PCA:

1) Step 1 - Calculate Mean of every feature
2) Step 2 - Calculate Covariance Matrix
covariance matrix - [ var(x1) ,  cov(x2,x1) || cov(x1,x2) , var(x2) ] -> 2x2
covariance formula: ((x1.1-mean(x1)) * (x2.1 - mean(x2)) + (x1.2-mean(x1)) * (x2.2 - mean(x2)) + .....) /  n - 1
variance formula:  ((x1.1-mean(x1)) ** 2 + (x1.2-mean(x1)) ** 2 + ......)  / n - 1
3) Step 3 -  Calculate Eigen Value (S is covariance matrix) -> [ S11 - lambda , S12 , S21 , S22 - lambda ]  = 0

Note: We will use biggest Eigen value to calculate eigen vector.

3) Step 3 - Calculate Eigen Vector: [ S11 - lambda , S12 , S21 , S22 - lambda ] [u1 , u2 ] = [0,0]

u1 , u2 -> Eigen Vector.

4) Choose principal components


5) Project data onto principal components [x1.1,x2.1] [u1,u2]

"""

import numpy as np
from sklearn.decomposition import PCA


def mean(arr: list[float]):
    return sum(arr) / len(arr)


def variance(arr: list[float], mean_val: float):
    variance_matrix: list[float] = []
    for num in arr:
        variance_matrix.append((num - mean_val) ** 2)
    return sum(variance_matrix) / (len(arr) - 1)


def covariance(arr1: list[float], arr2: list[float], mean_1: float, mean_2: float):
    covariance_matrix: list[float] = []
    for num1, num2 in zip(arr1, arr2):
        covariance_matrix.append((num1 - mean_1) * (num2 - mean_2))

    return sum(covariance_matrix) / (len(arr1) - 1)


def calc_covariance_matrix(arr_1: list[float], arr_2: list[float]):
    mean_1 = mean(arr_1)
    mean_2 = mean(arr_2)

    val_1 = variance(arr_1, mean_1)
    val_2 = variance(arr_2, mean_2)

    cov = covariance(arr_1, arr_2, mean_1, mean_2)

    return [[val_1, cov], [cov, val_2]]


def calc_eigen_values(covariance_matrix: np.ndarray):
    # | S - lambda (I) | = 0
    # S  = lambda (I)
    # S / I = lambda
    # Eigen decomposition: solve |S - λI| = 0
    eigen_values, eigen_vectors = np.linalg.eig(covariance_matrix)
    return eigen_values, eigen_vectors


def calc_eigen_vector(covariance_matrix: np.ndarray):
    # eigen_values_matrix * [u1,u2] = [0,0]
    eigen_values, eigen_vectors = calc_eigen_values(covariance_matrix)
    max_index = np.argmax(eigen_values)
    principal_vector = eigen_vectors[:, max_index]
    return principal_vector, eigen_values[max_index]


# eigen values -> lambda1 , lambda2
# eigen vectors -> u1 , u2

"""
Saare principal components nikal lenge ham
[x1.1,x2.1](1x2) * [u1 u2](2x1), [x1.2,x2.2](2x1), [x1.3,x2.3](2x1), [x1.4,x2.4](2x1), [x1.5,x2.5](2x1)
"""


def project_data_into_principal_components(
    x1_x2_arr: list[float], eigen_vector: np.ndarray
):
    # x1_x2_arr = [x1,x2] 1x2
    # eigen_vector = [u1,u2] 2x1
    # ans = [x1,x2] 1x2 * [u1,u2] 2x1 = [x1u1+x2u2,x1u2+x2u1] 1x2
    centered_data = x1_x2_arr - np.mean(x1_x2_arr, axis=0)
    ans = np.dot(centered_data, eigen_vector)
    return ans


def solve():
    x_data: list[float] = [2, 3, 4, 5]
    y_data: list[float] = [3, 4, 5, 6]

    mean_x = mean(x_data)
    mean_y = mean(y_data)

    cov_matrix = calc_covariance_matrix(x_data, y_data)

    eigen_val, eigen_vectors = calc_eigen_values(cov_matrix)

    principal_vector, principal_value = calc_eigen_vector(cov_matrix)

    data_matrix = np.column_stack((x_data, y_data))

    projected = project_data_into_principal_components(data_matrix, principal_vector)

    print(projected)

    data = np.column_stack((x_data, y_data))

    pca = PCA(n_components=1)
    pca.fit(data)
    projected_data = pca.transform(data)

    print(projected_data)


if __name__ == "__main__":
    solve()
