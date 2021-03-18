#include <stdio.h>

float main(){
	float digitado, soma=0, divisao;
	int positivos=0, numero=0;
	do{
		numero++;
		scanf("%f", &digitado);
		if(digitado>0){
			positivos++;
			soma = soma + digitado;
		}
	}
	while(numero<6);
	divisao = soma/positivos;
	printf("%d valores positivos\n", positivos);
	printf("%f\n", divisao);
	return 0;
}
