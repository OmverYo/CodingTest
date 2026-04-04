N = int(input())
xList = []
yList = []

for i in range(0, N):
    x, y = map(int, input().split())
    xList.append(x)
    yList.append(y)

xMax = max(xList)
xMin = min(xList)
yMax = max(yList)
yMin = min(yList)

area = (xMax - xMin) * (yMax - yMin)
print(area)