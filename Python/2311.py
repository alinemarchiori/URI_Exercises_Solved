quantidade, menor, maior, soma = 0,0,0,0
quantidade = int(input())
while(quantidade>0):
	menor, maior, soma, final= 10,0,0,0
	nome = input()
	dificuldade = float(input())
	notas = input().split()
	notas = list(notas)
	for i in range(len(notas)):
		notas[i] = float(notas[i])
	notas.sort()
	cont = 0
	for i in range(len(notas)-1):
		if(cont != 0):
			soma +=notas[i]
		else:
			cont+=1
	final = soma*dificuldade
	print(nome + " {:.2f}".format(final))
	quantidade-=1