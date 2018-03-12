a, b = map(int, input().split())

c = list(range(0, a))

# for i in c:
# 한 줄에 여러 문자 입력 기능

for i in c:
    if(c[i] < a):
        print(c[i])