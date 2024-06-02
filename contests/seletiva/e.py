
n = int(input())
friendship_levels = [list(map(int, input().split())) for _ in range(n - 1)]


friendship_sums = [sum(levels) for levels in friendship_levels]
max_friendship_sum = max(friendship_sums)
assignments = [friendship_sums.index(max_friendship_sum) + 1] * (n - 1)

print(max_friendship_sum)
for i in range(1, n):
    print(assignments[i - 1])
