#include<stdio.h>
double main(){
	double media, nota, soma;
	int n=0, escolha=0, verdade=1, verdade2=1;
	while(verdade==1){
		verdade2=1;
		while(n<2){
			scanf("%lf", &nota);
			if(nota>=0 && nota<=10){
				soma=soma+nota;
				n++;
			}
			else{
				printf("nota invalida\n");
			}
		}
		media=soma/2;
		printf("media = %.2lf\n", media);
		while(verdade2==1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &escolha);
			if(escolha==2){
				verdade=0;
				return 0;
			}
			if(escolha==1){
				n=0;
				media=0.0;
				soma=0.0;
				verdade2 = 0;
			}
		}
	}
	return 0;
}
