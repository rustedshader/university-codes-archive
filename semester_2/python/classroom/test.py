# z = list(map(int, input().split()))
# n = int(input())
# x = [z] * n
# for i in range(n):
#     x[i] = [i+2 for i in x[i]] 
#     print(x[i])

# s1: str = "spam"
# s2: str = "SPAM"
# r = [f'{s1[i]}{s2[i]}' for i in range(len(s1))]
# print(*r)
# for i in range(len(s1)):
#     print(f'{s1[i]}{s2[i]}',end=' ')

# cordinates = {(10,20): "A", (30,40): "B" , (50,60): "C"}
# t = (10,20)
# print(cordinates[t])
import random
z  = random.randint(1,100)
account = 10000

while account > 0:
    bet = int(input('Enter Your Lucky Number between 1 and 100: '))
    z = random.randint(1,100)

    if bet == z:
        account +=  200
        print('You Won')
        print('Your Account Balance',account)
    else:
        account -= 200
        print('You Lost')
        print('Lucky Number was',z)
        print('Your Account Balance',account)
