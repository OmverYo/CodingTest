A, B, V = map(int, input().split())
if A >= V:
    day = 1
    print(day)
else:
    heightPerDay = A - B
    day = int(V / heightPerDay)
print(day)