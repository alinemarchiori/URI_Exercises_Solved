alunos = int(input())
arquivo = open( "/tmp/matricula.txt", "w")

while alunos != 0:
	lista = input()
	arquivo.write(lista)
	alunos = alunos - 1

texto = arquivo.readlines()
for linha in arquivo:
	elementos = linha.split()
	
	
arquivo.close()
print (lista)