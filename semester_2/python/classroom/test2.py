if __name__ == '__main__':
    N = int(input())
    arr = []
    for i in range(N):
        x = input().split(" ")
        if x[0] == "insert":
            arr.insert(int(x[1]), int(x[2]))
        print(arr.remove)