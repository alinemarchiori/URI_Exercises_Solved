#include <stdio.h>

int main(){
	int n[20], cont=0, numero=0, contmais=0, nunero=0;
	while(cont<20){
		scanf("%d", &numero);
		n[cont]=numero;
		cont++;
	}
	cont--;
	while(contmais<10){
		numero=n[cont];
		nunero=n[contmais];	
		n[cont]=nunero;
		n[contmais]=numero;
		contmais++;
		cont--;
	}
	cont=0;
	while(cont<20){
		numero=n[cont];
		printf("N[%d] = %d\n", cont, numero);
		cont++;
	}
	return 0;
}
