N = int(input())
myList = []
for i in range(N):
    myList.append(list(map(int, input().split())))
myList.sort(key=lambda p: (p[0], p[1]))
for j in myList:
    print(' '.join(map(str,j)))