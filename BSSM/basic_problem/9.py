a = int(input())
buf = 0
resultString = ""
j = 0

for i in range(1, a+1):
    buf = 0
    j = i
    while(j <= a):
        buf += 1
        j+=i
    resultString += f" {str(buf)}"

print(resultString[::-1])