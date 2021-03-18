#include <stdio.h>
#include <math.h>
int main(){
	int n, quadrado, cont=1;
	scanf("%d", &n);
	do{
		if((cont%2)==0){
			quadrado = pow(cont,2);
			printf("%d^2 = %d\n", cont, quadrado);	
		}
		cont++;
	}
	while(cont<=n);
	return 0;
}
