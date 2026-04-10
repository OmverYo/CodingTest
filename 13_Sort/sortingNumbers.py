N = int(input())
nList = []
for i in range(0, N):
    temp = int(input())
    if temp in nList:
        continue
    else:
        nList.append(temp)
nList.sort()
for j in nList:
    print(j)