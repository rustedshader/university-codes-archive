def fib(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fib(n - 1) + fib(n - 2)


def solve(n):
    ll = []
    ll.append(0)
    ll.append(1)

    for i in range(n):
        ll.append(ll[i] + ll[i + 1])
    return ll[n]


if __name__ == "__main__":
    n = int(input()) + 1
    print(solve(n))
    print(fib(n))
