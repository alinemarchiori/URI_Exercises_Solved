#include <stdio.h>

int main(){
	int valores, cont=1, posicao, maior=0;
	do{
		scanf("%d", &valores);
		if(valores>maior){
			maior = valores;
			posicao = cont;
		}
		cont++;
	}
	while(cont<101);
	printf("%d\n%d\n", maior, posicao);
	return 0;
}
