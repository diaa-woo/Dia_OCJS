a = input()

year = int(a[0]+a[1])
age = 0

if a[7] == '1' or a[7] == '2' :
    age = 119 - year + 1
else: 
    age = 19 - year + 1

if a[7] == '1' or a[7] == '3':
    print(f"{age} M")
else:
    print(f"{age} W")