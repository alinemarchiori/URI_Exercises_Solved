#include <stdio.h>

float main(void){
	float a[100], numero;
	int cont=0;
	while(cont<100){
		scanf("%f", &numero);
		a[cont]=numero;
		cont++;
	}
	cont=0;
	while(cont<100){
		numero = a[cont];
		if(numero<=10){
				printf("A[%d] = %.1f\n", cont, numero);		
		}
		cont++;
	}
		
	return 0;
}
