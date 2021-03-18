#include <stdio.h>

float main(){
	float digitado;
	int positivos=0, numero=0;
	do{
		numero++;
		scanf("%f", &digitado);
		if(digitado>0){
			positivos++;
		}
	}
	while(numero<6);
	printf("%d valores positivos\n", positivos);
	return 0;
}
