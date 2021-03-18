#include <stdio.h>

int main(){
	int cont=15, vetorpar[5], vetorimpar[5], par=0, impar=0, valor=0;
	while(cont>0){
		scanf("%d", &valor);
		if(valor%2==0){
			vetorpar[par]=valor;
			par++;
			if(par>4){
				par=0;
				while(par<5){
					printf("par[%d] = %d\n", par, vetorpar[par]);
					par++;
				}
				par=0;
			}
		}
		if(valor%2!=0){
			vetorimpar[impar]=valor;
			impar++;
			if(impar>4){
				impar=0;
				while(impar<5){
					printf("impar[%d] = %d\n", impar, vetorimpar[impar]);
					impar++;
				}
				impar=0;
			}
		}
		cont--;	
	}
	cont=0;
	while(cont<impar){
		printf("impar[%d] = %d\n", cont, vetorimpar[cont]);
		cont++;
	}
	cont=0;
	while(cont<par){
		printf("par[%d] = %d\n", cont, vetorpar[cont]);
		cont++;
	}
	return 0;
}
