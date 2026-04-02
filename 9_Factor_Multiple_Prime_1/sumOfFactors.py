n = 0
while n != -1:
    n = int(input())
    if n == -1:
        break
    
    myList = []
    for x in range(1, n):
        if n % x == 0:
            myList.append(x)

    total = sum(myList)

    if total == n:
        print(f"{n} = {' + '.join(str(x) for x in myList)}")
    else:
        print(f"{n} is NOT perfect.")