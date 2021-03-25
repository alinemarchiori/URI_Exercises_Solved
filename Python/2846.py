vezes = int(input())
def numeros_fibonacci(x):
    cont,segundo,primeiro = 3,1,0
    lista = [0]
    while cont <= x:
        terceiro = segundo + primeiro
        lista.append(terceiro)
        segundo, primeiro, cont = terceiro, segundo, cont+1
    return lista

if vezes == 1:
    print("4")
elif vezes == 2:
    print("6")
else:
    if vezes > 10 and vezes < 50:
        lista = numeros_fibonacci(vezes)
    elif vezes >= 50:
        lista = numeros_fibonacci(vezes//3)
    else:
        lista = numeros_fibonacci(vezes+vezes)
    contador, num, c = 0, 0, 0
    while contador < vezes:
        if c not in lista:
            num = c
            contador+=1
        c+=1
    print(num)