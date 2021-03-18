#include <stdio.h>

int main(){
	int x[10], cont=0;
	while(cont<10){
		scanf("%d", &x[cont]);
		cont++;
	}
	cont=0;
	while(cont<10){
		if(x[cont]<=0){
			x[cont]=1;
		}
		cont++;
	}
	cont=0;
	while(cont<10){
		printf("X[%d] = %d\n", cont, x[cont]);
		cont++;
	}
	return 0;
}
