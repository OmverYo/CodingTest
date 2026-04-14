N = int(input())
myList = []
for i in range(N):
    x, y = map(int, input().split())
    myList.append([x, y])
myList.sort(key=lambda p: (p[1], p[0]))
for j in myList:
    print(' '.join(map(str,j)))