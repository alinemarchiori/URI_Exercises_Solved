
while True:
    try:
        pilha, fila, fila_prioridade = [], [], []
        pi, fi, fipi = True, True, True
        vezes = int(input())
        contador = 0

        for i in range(vezes):
            instruc,element = input().split()

            if instruc == '1':
                contador += 1
                pilha.append(int(element))
                fila.append(int(element))
                fila_prioridade.append(int(element))
                fila_prioridade.sort(reverse=True)

            else:
                if pilha[contador-1] == int(element) and pi:
                    contador -= 1
                    pilha.remove(int(element))
                else:
                    pi = False
                if fila[0] == int(element) and fi:
                    fila.remove(int(element))
                else:
                    fi = False
                if fila_prioridade[0] == int(element) and fipi:
                    fila_prioridade.remove(int(element))
                else:
                    fipi = False

        if (pi and fi) or (pi and fipi) or (fi and fipi):
            nome = 'not sure'
            
        elif pi:
            nome = 'stack'

        elif fipi:
            nome = 'priority queue'

        elif fi:
            nome = 'queue'

        else:
            nome = 'impossible'
        
        print(nome)
    except EOFError:
        break
