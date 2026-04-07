N = int(input())
count = 0
i = 665

while count < N:
    i += 1
    length = len(str(i))
    isSix = 0

    for d in range(length - 1, -1, -1):
        if isSix == 3:
            count += 1
            isSix = 0
            break
        if isSix > 0:
            if str(i)[d] != '6':
                isSix = 0
        if str(i)[d] == '6':
            isSix += 1

    if isSix >= 3:
        count += 1

print(i)

# N = int(input())
# count = 0
# i = 665

# while count < N:
#     i += 1
#     if "666" in str(i):
#         count += 1

# print(i)