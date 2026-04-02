N = int(input())
myList = []

while N != 0:
    if N == 1:
        N = 0
        break
    
    for i in range(2, N + 1):
        if N % i == 0:
            myList.append(i)
            N = N // i
            break

for j in myList:
    print(j)