a, b = map(int, input().split())
result = 0
consolePrint = ""

for i in range (a, b+1):
    consolePrint += f"{i} "
    if i != b:
        consolePrint += f"+ "
    else:
        consolePrint += f"= "
    result += i
    
print(f"{consolePrint+str(result)}")