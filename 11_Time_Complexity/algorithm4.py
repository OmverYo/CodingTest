n = int(input())
print(n * (n - 1) // 2)
print(2)

# def function(n):
#     sum = 0
#     for i in range(1, n):
#         for j in range(i + 1, n + 1):
#             sum += 1
#             print(f"i={i} (range 1~{n-1}), j={j} (range {i+1}~{n}), 누적 횟수={sum}")
#     print(f"총 횟수: {sum}")

# function(5)

# def function(n):
#     sum = 0
#     for i in range(1, n):
#         for j in range(1, n + 1):  # j가 i보다 작은 경우도 포함
#             sum += 1
#             print(f"i={i}, j={j}, 누적 횟수={sum}")
#     print(f"총 횟수: {sum}")

# function(5)