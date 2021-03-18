#include <stdio.h>

int main(){
	int n, cont=1, resultado;
	scanf("%d", &n);
	do{
		resultado = cont*n;
		printf("%d x %d = %d\n", cont, n, resultado);
		cont++;
	}
	while(cont<11);
	return 0;
}
