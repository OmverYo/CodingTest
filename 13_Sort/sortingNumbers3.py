import sys

input = sys.stdin.readline
output = sys.stdout.write

N = int(input())
count = [0] * 10001

for _ in range(N):
    count[int(input())] += 1

for i in range(1, 10001):
    if count[i] > 0:
        for _ in range(count[i]):
            output(str(i) + '\n')