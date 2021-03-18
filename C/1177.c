#include <stdio.h>

int main(){
	int n[1000], cont=0, t=0;
	scanf("%d", &t);
	int aux=0;
	while(cont<1000){
		aux=0;
		while(aux<t){
			printf("N[%d] = %d\n", cont, aux);
			aux++;
			cont++;
			if (cont==1000){
				break;
			}
		}
	}
	return 0;
}
