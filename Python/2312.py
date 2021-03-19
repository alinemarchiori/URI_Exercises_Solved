########################################################################
vezes = int(input())
m = []
auxiliar = []

troca = False

def ordena_letras(matriz, indice):
    troca = matriz[indice]
    aux = matriz[indice+1]
    matriz.remove(aux)
    matriz.insert(indice, aux)
    return matriz

#############################################################################

def letra(m, indice):
    global troca
    troca = False
    primeira1 = m[indice][0]
    segunda2 = m[indice+1][0]
    if ord(primeira1[0]) > ord(segunda2[0]):
        ordena_letras(m, indice)
        troca = True
    elif primeira1[0] == segunda2[0] and ord(primeira1[1]) > ord(segunda2[1]):
        ordena_letras(m, indice)
        troca = True
    elif primeira1[0] == segunda2[0] and primeira1[1] == segunda2[1] and ord(primeira1[3]) > ord(segunda2[3]):
        ordena_letras(m, indice)
        troca = True
    elif primeira1[0] == segunda2[0] and primeira1[1] == segunda2[1] and primeira1[3] == segunda2[3] and ord(primeira1[4]) > ord(segunda2[4]):
        ordena_letras(m, indice)
        troca = True
    elif primeira1[0] == segunda2[0] and primeira1[1] == segunda2[1] and primeira1[3] == segunda2[3] and ord(primeira1[4]) > ord(segunda2[4]):
        ordena_letras(m, indice)
        troca = True
    else:
        troca = False
    return m, troca

for i in range(vezes):
    nome, ouro, prata, bronze = input().split(" ")
    auxiliar.append(nome)
    auxiliar.append(int(ouro))
    auxiliar.append(int(prata))
    auxiliar.append(int(bronze))
    m.append(auxiliar)
    auxiliar = []

########################################################################################

#ordena a lista pelas medalhas de ouro
m.sort(key=lambda x: x[1], reverse=True)
linha = 0
while linha < len(m)-1:
    if m[linha][1] == m[linha+1][1] and linha < len(m)-1:
        if m[linha][2] < m[linha+1][2] and linha < len(m)-1:
            m = ordena_letras(m, linha)
            linha = 0
        elif m[linha][2] == m[linha+1][2] and linha < len(m)-1:
            if m[linha][3] < m[linha+1][3] and linha < len(m)-1:
                m = ordena_letras(m, linha)
                linha = 0
            elif m[linha][3] == m[linha+1][3] and linha < len(m)-1:
                m, troca = letra(m, linha)
                if troca:
                    linha = 0
                else:
                    linha += 1
            else:
                linha += 1
        else:
            linha += 1
    else:
        linha += 1

for i in range(len(m)):
    print(m[i][0], m[i][1], m[i][2], m[i][3])