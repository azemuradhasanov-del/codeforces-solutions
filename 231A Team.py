n = int(input())
say1 = 0

for _ in range(n):
    a, b, c = map(int, input().split())
    if a + b + c > 1:
        say1 += 1

print(say1)
