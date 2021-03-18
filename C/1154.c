#include <stdio.h>

int main(){
	int contador=0, soma=0, idade=0;
	while(idade>=0){
		scanf("%d", &idade);
		if(idade>=0){
			contador++;
			soma=soma+idade;
		}
	}
	float media=0.0;
	float auxiliarsoma=soma;
	float auxiliarcontador=contador;
	media=auxiliarsoma/auxiliarcontador;
	printf("%.2f\n", media);
	return 0;
}
