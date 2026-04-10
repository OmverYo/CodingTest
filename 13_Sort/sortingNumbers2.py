import sys
N = int(sys.stdin.readline())
myList = []
for i in range(0, N):
    myList.append(int(sys.stdin.readline()))
myList.sort()
for j in myList:
    print(j)