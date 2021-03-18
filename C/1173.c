#include <stdio.h>

int main(){
	int n[10], numero, cont=0;
	scanf("%d", &numero);
	while(cont<10){
		n[cont]=numero;
		printf("N[%d] = %d\n", cont, numero);
		numero=numero*2;
		cont++;
	}
	return 0;
}
