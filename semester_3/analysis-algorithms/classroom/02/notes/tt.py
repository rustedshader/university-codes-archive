def ll(num: int, arr: list):
    L = 0
    R = len(arr) - 1

    while L <= R:
        M = (L + R) // 2
        if arr[M] < num:
            L = M + 1
        elif arr[M] > num:
            R = M - 1
        else:
            return M
    return "Not Found"


if __name__ == "__main__":
    arr = [x for x in range(1, 51)]
    print(ll(47, arr))
