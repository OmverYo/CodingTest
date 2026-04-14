N = list(map(int, input()))
N.sort(reverse=True)
answer = ""
for i in N:
    answer += str(i)
print(answer)