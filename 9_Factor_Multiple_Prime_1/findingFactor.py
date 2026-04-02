N, K = map(int, input().split())
myList = []

for x in range(1, N + 1):
    if N % x == 0:
        myList.append(x)

count = len(myList)

if K > count:
    print("0")

else:
    print(myList[K - 1])