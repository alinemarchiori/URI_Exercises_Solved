#include <stdio.h>

int main(void){
	int x=0, z=0, cont=0,contador=1, soma=0;
	scanf("%d", &x);
	while(x>=z){
		scanf("%d", &z);
	}
	soma=x;
	cont++;
	while(soma<z){
		int vaca=(x+contador);
		soma=soma+vaca;
		cont++;
		contador++;
	}
	printf("%d\n", cont);
	return 0;
}
