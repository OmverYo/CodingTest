x, y, w, h = map(int, input().split())
myList = [x, y]
myList.append(w - x)
myList.append(h - y)
max = 1000
for i in myList:
    if i <= max:
        max = i
print(max)