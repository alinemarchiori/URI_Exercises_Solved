n = int(input())
for i in range(n):
    dias = 0
    valor = float(input())
    while valor>1:
        valor = valor/2
        dias += 1 
    print(dias, "dias")