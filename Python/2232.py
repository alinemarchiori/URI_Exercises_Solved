casos = int(input())
for i in range(casos):
    linha = int(input())
    soma = 0
    for i in range(linha):
        soma = soma + 2**(i)
    print(soma)