from matplotlib import pyplot as plt

data = {
    5: 50,
    6: 55,
    7: 62,
    8: 70,
    9: 71,
    10: 75,
    11: 78,
    12: 80,
    13: 85,
    14: 90,
    50: 99,
}

# y = mx + c
# y = b1 * x + b0


def calc_y(m, x, c):
    return (m * x) + c


def calc_average(data: dict):
    # return sum(data.values()) / len(data.values()), sum(data.keys()) / len(data.keys())
    return sum(data.keys()) / len(data.keys()), sum(data.values()) / len(data.values())


def calc_slope(data: dict, x_bar: float, y_bar: float):
    numerator = 0
    denominator = 0
    for val in data.keys():
        numerator += (val - x_bar) * (data[val] - y_bar)
        denominator += (val - x_bar) ** 2
    return numerator / denominator


# Calculate Mean Square
def calc_mse(data: dict, m: float, c: float):
    n = len(data)
    error = 0
    for x, y in data.items():
        y_pred = m * x + c
        error += (y - y_pred) ** 2
    return error / n


x_bar, y_bar = calc_average(data)

m = calc_slope(data, x_bar, y_bar)

c = y_bar - (m * x_bar)

print("m is", m, "c is", c)

print("Mean Square Error is", calc_mse(data, m, c))

print("At 2 Val", calc_y(m, 2, c))

print("At 3 Val", calc_y(m, 3, c))

print("At 10.5 Val", calc_y(m, 10.5, c))

print("At 20 Val", calc_y(m, 20, c))

x_vals = [val for val in data.keys()]
x_vals.sort()
y_vals = [m * x + c for x in x_vals]


plt.scatter(list(data.keys()), list(data.values()))
plt.plot(x_vals, y_vals)
plt.xlabel("X")
plt.ylabel("Y")
plt.show()
