n, k = map(int, input().split())
arr = [0] + list(map(int, input().split()))

say = 0
for j in range(1, n+1):
    if arr[j] != 0 and arr[k] <= arr[j]:
        say += 1

print(say)
