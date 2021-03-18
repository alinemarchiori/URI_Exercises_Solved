#include <stdio.h>

int main(){
	int n=5, valores, pares=0, impares=0, negativos=0, positivos=0;
	do{
		scanf("%d", &valores);
		n--;
		if ((valores%2)==0){
			pares++;
		}
		if ((valores%2)!=0 && valores!=0){
			impares++;
		}
		if(valores>0){
			positivos++;
		}
		if(valores<0){
			negativos++;
		}
	}
	while(n>0);
	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	printf("%d valor(es) positivo(s)\n", positivos);
	printf("%d valor(es) negativo(s)\n", negativos);
	return 0;
}
