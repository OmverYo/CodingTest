N, B = map(int, input().split())
result = ""

while N > 0:
    rest = N % B
    N = N // B
    if rest < 10:
        result += str(rest)
    else:
        result += chr(rest - 10 + ord('A'))

print(result[::-1])