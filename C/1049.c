#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void){
	char primeira[100], segunda[100], terceira[100];
	scanf("%s%s%s", primeira, segunda, terceira);
	if (strcmp(primeira, "vertebrado")==0){
		if (strcmp(segunda, "ave")==0){
			if(strcmp(terceira, "carnivoro")==0){
				printf("aguia\n");
			}
			else{
				printf("pomba\n");
			}
		}
		if(strcmp(segunda, "mamifero")==0){
			if(strcmp(terceira, "onivoro")==0){
				printf("homem\n");
			}
			else{
				printf("vaca\n");
			}
		}
	}
	else{
		if(strcmp(segunda, "inseto")==0){
			if(strcmp(terceira, "hematofago")==0){
				printf("pulga\n");
			}
			else{
				printf("lagarta\n");
			}
		}
		else{
			if(strcmp(terceira, "onivoro")==0){
				printf("minhoca");
			}
			else{
				printf("sanguessuga\n");
			}
		}
	}
	return 0;
}
