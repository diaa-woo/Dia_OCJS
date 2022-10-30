a, b = map(int, input().split())
result = 0

for i in range(1, a+1):
    if i%b == 0:
        result += i

print(result)