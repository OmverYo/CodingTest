myList = []
average = 0
for i in range(0, 5):
    temp = int(input())
    myList.append(temp)
    average += temp
myList.sort()
print(int(average / 5))
print(myList[2])