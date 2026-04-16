N = int(input())
nList = set(list(map(int, input().split())))
M = int(input())
mList = list(map(int, input().split()))

checkList = [0] * len(mList)
idx = 0

for i in mList:
    if i in nList:
        checkList[idx] = 1
    idx += 1
print(*checkList)