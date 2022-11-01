string = input()

intString = ""
numArray = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

for i in string:
    for j in numArray:
        if i == j:
            intString += i

result = int(intString)
count = 1
print(result)

for i in range(2, result+1):
    if result % i == 0:
        count+=1

print(count)