def print_q(n: int) -> int:
    print(n)
    if n==1:
        return 1
    return print_q(n-1)

print_q(5)
