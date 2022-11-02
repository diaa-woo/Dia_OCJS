insult = input()
oneCount = 0
twoCount = 0

for i in insult:
    if i == '(':
        oneCount += 1
    else :
        twoCount += 1
    
if insult[0] != ')' and insult[-1] != '(':
    if oneCount == twoCount :
        print("YES")
    else:
        print("NO") 
else:
    print("NO") 