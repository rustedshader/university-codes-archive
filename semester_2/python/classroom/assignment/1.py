dp = []

def happy_number(n):
    if n == 1:
        return True
    m = 0
    t = n
    while t > 0:
        r = t % 10
        m += r ** 2
        t = t // 10
    if m not in dp:
        dp.append(m)
        return happy_number(m)
    else:
        return False

n = int(input())
if happy_number(n):
    print('Happy Number')
else:
    print('Not Happy Number')


    