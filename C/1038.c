#include <stdio.h>

float main(){
	float total;
	int codigo, quantidade;
	scanf("%d%d", &codigo, &quantidade);
	if (codigo==1){
		total = quantidade * 4.0;
	}
	if (codigo==2){
		total = quantidade * 4.5;
	}
	if (codigo==3){
		total = quantidade * 5.0;
	}
	if (codigo==4){
		total = quantidade * 2.0;
	}
	if (codigo==5){
		total = quantidade * 1.5;
	}
	printf("Total: R$ %.2f\n", total);
	return 0;
}
