N, M = map(int, input().split())
nList = []
nList = list(map(int, input().split()))

def function(N, M):
    sum = 0
    maxSum = 0
    for i in range(0, N - 2):
        for j in range(i + 1, N - 1):
            for k in range(j + 1, N):
                sum = nList[i] + nList[j] + nList[k]
                if sum >= maxSum and sum <= M:
                    maxSum = sum
                    sum = 0
    print(maxSum)

function(N, M)