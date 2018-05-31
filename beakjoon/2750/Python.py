a = int(input())
b = list(range(1, a+1))

for i in b:
    c = int(input())
    b.insert(i,c)
    print(b[i])