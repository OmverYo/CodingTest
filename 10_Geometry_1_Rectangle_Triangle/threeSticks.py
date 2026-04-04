a, b, c = map(int, input().split())
longest = max(a, b, c)
if a + b <= c or a + c <= b or b + c <= a:
    if longest == a:
        a = b + c - 1
    elif longest == b:
        b = a + c - 1
    else:
        c = a + b - 1
    print(a + b + c)
else:
    print(a + b + c)