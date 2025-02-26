import matplotlib.pyplot as plt
import numpy as np

fib_x_itterations = np.array([5,10,15,20,25,30,35,40])
fib_y_time_cpython = np.array([0.03,0.03,0.03,0.03,0.04,0.13,1.13,11.13])

fib_y_time_pypy = np.array([0.02,0.02,0.02,0.04,0.03,0.04,0.10,2.56])

plt.plot(fib_x_itterations, fib_y_time_cpython, label='CPython')
plt.plot(fib_x_itterations, fib_y_time_pypy, label='PyPy')

plt.xlabel('Fibonacci Iterations')
plt.ylabel('Time (s)')
plt.title('Fibonacci Time Comparison')
plt.legend()
plt.show()