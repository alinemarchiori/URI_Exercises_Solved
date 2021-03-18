#include <stdio.h>

int main(){
	int numero, contador=1, soma=0;
	scanf("%d", &numero);
	while(contador<=numero){
		while(soma<=numero){
			soma=soma+contador;
			if(soma==numero){
				printf("%d\n", contador);
				break;
			}
		}
		contador++;
		soma=0;
	}
	return 0;
}
