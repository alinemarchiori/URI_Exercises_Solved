vezes = int(input())

def verifica(g, b, r):
    if g == b and b == r:
        print("trempate")
    elif (g == b and g > r) or (b == r and b > g) or (g == r and g > b):
        print('empate')
    else:
        lista = [g, r, b]
        lista.sort(reverse=True)
        if lista[0] == g:
            print('green')
        elif lista[0] == r:
            print('red')
        else:
            print('blue')

for i in range(vezes):
    green = 0
    blue = 0
    red = 0
    testes = int(input())
    for i in range(testes):
        ganhou, sofreu = input().split()
        if sofreu == 'G':
            if ganhou == 'B':#anti-horário
                blue += 1
            else:
                red += 2
        elif sofreu == 'R':
            if ganhou == 'G':#anti-horário
                green += 1
            else:
                blue +=2
        else:
            if ganhou == 'G':
                green += 2
            else:
                red += 1#anti-horário
        
    verifica(green, blue, red)