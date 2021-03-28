eof_fake = True
while eof_fake:
    lista,lista_auxiliar,pontos = [],[],0
    vezes = int(input())

    for i in range(vezes):
        instruc,element = input().split()
        if instruc == '1':
            lista.append(int(element))
        else:
            lista_auxiliar.append(int(element))

    if lista == lista_auxiliar:
        nome = 'queue'
        pontos += 1
   
    if lista == lista_auxiliar[::-1]:
        nome = 'stack'
        pontos += 1

    lista.sort()

    if lista[::-1] == lista_auxiliar:
        nome = 'priority queue'
        pontos += 1

    if pontos > 1:
        nome = 'not sure'

    if pontos == 0:
        nome = 'impossible'
    
    print(nome)
