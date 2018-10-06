'''
#def self_number(self, x):

A = 1000
B = 10

li = list(range(1, A + 1))

li2 = list(range(0, B))

for j in li: # 1 ~ A
    d = 0
    if (li[j] >= A / 100):
        for i in li2: # 0 ~ 9
            d += i
        if(li[j] > A / 10):
            for i in li2: # 0 ~ 9
                d += li[i] + i

    for i in li2:  # 0 ~ 9
        d += i

    print(d)
'''