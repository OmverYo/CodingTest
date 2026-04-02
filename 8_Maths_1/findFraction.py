X = int(input())

k = 1
total = 0

while total < X:
    total += k
    k += 1

k -= 1

pos = X - (total - k)

if k % 2 == 0:
    numerator = pos
    denominator = k + 1 - pos
else:
    numerator = k + 1 - pos
    denominator = pos

print(f"{numerator}/{denominator}")