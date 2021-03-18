#include <stdio.h>

int main(void){
	int x=1, contador=0, soma=0;
	while(x!=0){
		scanf("%d", &x);
		if(x==0){
			break;
		}
		while(contador<5){
			if((x%2)==0){
				soma=soma+x;
				contador++;
			}
			x++;
		}
		printf("%d\n", soma);
		contador=0;
		soma=0;
	}
	return 0;
}
