weak = {
    0: 'SUN',
    1: 'MON',
    2: 'TUE',
    3: 'WED',
    4: 'THU',
    5: 'FRI',
    6: 'SAT'
}

x, y = map(int, input().split())

a = list(range(1, x+1))
b = 0

for i in a:
    if i != a[-1]:
        if i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12:
            b += 31
        elif i == 4 or i == 6 or i == 9 or i == 11:
            b += 30
        else:
            b += 28
    else:
        b += y

c = b % 7
print(weak[c])