def fib(n):
    if n <= 0:
        return 0
    if n == 1:
        return 1
    
    dp = [0] * (n + 1)
    dp[1] = 1
    
    for i in range(2, n + 1):
        dp[i] = dp[i-1] + dp[i-2]
    
    return dp[n]

def fib_normal(n):
    if n <= 0:
        return 0
    if n == 1:
        return 1
    
    return fib_normal(n-1) + fib_normal(n-2)

if __name__ == '__main__':
    n = 50
    print(fib_normal(n))
