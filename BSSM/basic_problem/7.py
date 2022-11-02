inputString = input()
resultString = ""

for i in inputString:
    if i.isupper() :
        resultString += i.lower()
    elif i.isspace():
        pass
    else:
        resultString += i
    
print(resultString)