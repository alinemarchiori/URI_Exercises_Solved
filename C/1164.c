#include <stdio.h>

int main(void){
	int casos=0, contador=0;
	scanf("%d", &casos);
	while(casos>0){
		int soma=0, numero=0;
		scanf("%d", &numero);
		contador=numero-1;
		while(contador>0){
			if(numero%contador==0){
				soma=soma+contador;
			}
			contador--;
		}
		if(soma==numero){
			printf("%d eh perfeito\n", numero);
		}
		else{
			printf("%d nao eh perfeito\n", numero);
		}
		casos--;
	}
	return 0;
}
