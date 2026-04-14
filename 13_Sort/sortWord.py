N = int(input())
myList = []
for i in range(N):
    myList.append(input())
myList = list(set(myList))
myList.sort(key = lambda p: (len(p), p))
for j in myList:
    print(j)