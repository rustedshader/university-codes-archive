N = int(input('Number of Test Cases\n: '))
for _ in range(N):
    try:
        a,b = map(int,input().split(' '))
        print(a/b)
    except:
        print('Error: Not an Integer Value of a  or b ')
