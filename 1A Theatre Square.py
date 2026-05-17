import math

n, m, a = map(float, input().split())
result = math.ceil(n / a) * math.ceil(m / a)
print(int(result))
