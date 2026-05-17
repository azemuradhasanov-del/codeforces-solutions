n = int(input())
say = 0
for _ in range(n):
    s = input()
    if s[1] == '+':
        say += 1
    elif s[1] == '-':
        say -= 1

print(say)
