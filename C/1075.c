#include <stdio.h>

int main(){
	int N, cont=1;
	scanf("%d", &N);
	do{
		if((cont%N)==2){
			printf("%d\n", cont);
		}
		cont++;
	}
	while(cont<=10000);
	
	return 0;
}
