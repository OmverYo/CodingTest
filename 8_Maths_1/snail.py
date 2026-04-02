A, B, V = map(int, input().split())
if A >= V:
    print(1)
else:
    day = (V - A + (A - B) - 1) // (A - B) + 1
    print(day)