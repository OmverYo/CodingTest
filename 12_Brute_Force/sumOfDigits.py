# N = input()
# M = int(N)
# nList = []
# sum = 0
# for i in N:
#     nList.append(int(i))
# for j in nList:
#     sum += j
# sum = sum * 2
# M = M - sum
# if M <= 0:
#     print(0)
# else:
#     print(M)

N = int(input())
for i in range(1, N):
    digit_sum = sum(int(d) for d in str(i))
    if i + digit_sum == N:
        print(i)
        break
else:
    print(0)

# digit_sum = sum(int(d) for d in str(i))
# 위랑 아래랑 같음
# digit_sum = 0
# for d in str(i):
#     digit_sum += int(d)