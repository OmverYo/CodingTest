# N = int(input())
# aList = list(map(int, input().split()))
# bList = [0] * N
# idx = 0
# for i in aList:
#     for j in aList:
#         if i > j:
#             bList[idx] += 1
#     idx += 1
# print(bList)

# N = int(input())
# aList = list(map(int, input().split()))
# bList = sorted(set(aList))
# cList = [] * N
# idx = 0
# for i in aList:
#     if aList[idx] > bList[idx]:
#         cList[idx] += 1

N = int(input())
aList = list(map(int, input().split()))
bList = sorted(set(aList))
rank = {v: i for i, v in enumerate(bList)}
print(*[rank[x] for x in aList])