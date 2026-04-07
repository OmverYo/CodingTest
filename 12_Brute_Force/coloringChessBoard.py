N, M = map(int, input().split())
board = []
for i in range(N):
    board.append(list(input()))

minCount = 64

for i in range(N - 7):
    for j in range(M - 7):
        countW = 0
        countB = 0
        for r in range(8):
            for c in range(8):
                if (r + c) % 2 == 0:
                    if board[i+r][j+c] != 'W':
                        countW += 1
                    if board[i+r][j+c] != 'B':
                        countB += 1
                else:
                    if board[i+r][j+c] != 'B':
                        countW += 1
                    if board[i+r][j+c] != 'W':
                        countB += 1
        minCount = min(minCount, countW, countB)

print(minCount)