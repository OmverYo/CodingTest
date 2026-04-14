N = int(input())
myList = []
for i in range(N):
    x, y = input().split()
    myList.append([i, int(x), y])
myList.sort(key = lambda p: (p[1], p[0]))
for j in range(N):
    print(myList[j][1], myList[j][2])