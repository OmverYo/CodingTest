M = int(input())
N = int(input())

mylist = []

for i in range(M, N + 1):
    if i == 1:
        continue
    for j in range(2, i):
        if i % j == 0:
            break
    else:
        mylist.append(i)

if len(mylist) == 0:
    print("-1")

else:
    print(sum(mylist))
    print(mylist[0])