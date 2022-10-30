a = int(input())
result = 1 # 1은 모든 수의 진약수이기 때문에
console = "1 "

for i in range(2, a):  # 1은 기본적으로 더하고 2부터 시작
    if a%i == 0:
        result += i
        console += f"+ {i} "
    if i+1 == a:
        console += f"= "
        
print(f"{console}{str(result)}")