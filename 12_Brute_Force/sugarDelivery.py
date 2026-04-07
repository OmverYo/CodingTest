N = int(input())
aNum = int(N / 5)
bNum = int(N / 3)
minBag = 0

for i in range(0, aNum + 1):
    for j in range(0, bNum + 1):
        if 5 * i + 3 * j == N and i + j <= minBag:
            minBag = i + j
        if 5 * i + 3 * j == N and i + j <= bNum and minBag == 0:
            minBag = i + j

if minBag == 0:
    print(-1)
else:
    print(minBag)