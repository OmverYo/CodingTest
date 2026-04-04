x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())
xList = [x1, x2, x3]
yList = [y1, y2, y3]
for i in xList:
    if xList.count(i) == 1:
        print(i)

for j in yList:
    if yList.count(j) == 1:
        print(j)