#include <stdio.h>
float main(){
	float media, nota, soma;
	int n=0;
	while(n!=2){
		scanf("%f", &nota);
		if(nota>=0 && nota<=10){
			soma=soma+nota;
			n++;
		}
		else{
			printf("nota invalida\n");
		}
	}
	media=soma/2;
	printf("media = %.2f\n", media);
	return 0;
}
