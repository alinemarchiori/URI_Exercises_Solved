#include <stdio.h>
int main(){
	float matriz[12] [12], soma=0, media=0, numero=0;
	int linha=0, coluna=0, linhaescolhida;
	char letra[1];
	scanf("%d%s", &linhaescolhida, letra);
	while(linha<12){
		coluna=0; 
		scanf("%f", &numero);
		matriz[linha] [coluna]=numero;
		while(coluna<11){
			coluna++;
			scanf("%f", &numero);
			matriz[linha] [coluna]=numero;
			
		}
		linha++;
	}
	numero=0;
	if(strcmp(letra,"S")==0){
		coluna=0;
		while(coluna<12){
			numero=matriz[linhaescolhida] [coluna];
			printf("%d\n", numero);
			soma=soma+numero;
			printf("%d\n", soma);
			coluna++;
		}
		printf("%f\n", soma);
	}
	if(strcmp(letra,"M")==0){
		coluna=0;
		while(coluna<12){
			numero=matriz[linhaescolhida] [coluna];
			printf("%d\n", numero);
			soma=soma+numero;
			coluna++;
		}
		media=soma/12;
		printf("%f\n", media);
	}
	linha=0;
	while(linha<12){
		coluna=0;
		numero=matriz[linha] [coluna];
		printf("%.0f ", numero);
		while(coluna<11){
			coluna++;
			numero=matriz[linha] [coluna];
			printf("%.0f ", numero);
		}
		printf("\n");
		linha++;
	}
	return 0;
}
