#include <stdio.h>

int main(void){
	double N[100], valor=0.0;
	int cont=0;
	scanf("%lf", &valor);
	while(cont<100){
		N[cont]=valor;
		valor=valor/2.0;
		cont++;
	}
	cont=0;
	while(cont<100){
		printf("N[%d] = %.4lf\n", cont, N[cont]);
		cont++;
	}
	return 0;
}
