#include <stdio.h>
#include <string.h>
float main(){
	float quantidade, sapo=0, coelho=0, rato=0, total=0, cobaias;
	float percentualsapos, percentualcoelhos, percentualratos;
	char letra[2];
	scanf("%f", &quantidade); 
	do{
		scanf("%f%s", &cobaias, letra);
		if(strcmp(letra,"S")==0){
			sapo = sapo + cobaias;
		}	
		if(strcmp(letra,"R")==0){
			rato = rato + cobaias;
		}
		if(strcmp(letra,"C")==0){
			coelho = coelho + cobaias;
		}
		total = cobaias+total;
		quantidade--;
	}
	while(quantidade>0);
	
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %.0f\n", coelho);
	printf("Total de ratos: %.0f\n", rato);
	printf("Total de sapos: %.0f\n", sapo);
	percentualcoelhos = (coelho/total)*100.0;	
	percentualratos = (rato/total)*100.0;	
	percentualsapos = (sapo/total)*100.0;	
	printf("Percentual de coelhos: %.2f %%\n", percentualcoelhos);
	printf("Percentual de ratos: %.2f %%\n", percentualratos);
	printf("Percentual de sapos: %.2f %%\n", percentualsapos);
	
	return 0;
}
