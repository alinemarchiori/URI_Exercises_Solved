#include <stdio.h>

int main(){
	int numero, cont=0;
	scanf("%d", &numero);
	cont=numero-1;
	while(cont>=1){
		numero=numero*cont;
		cont--;
	}
	printf("%d\n", numero);
	return 0;
}
