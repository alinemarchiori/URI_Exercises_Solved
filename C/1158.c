#include <stdio.h>

int main(){
	int n=0, x, y;
	int contador=0, cont=0, soma=0;
	scanf("%d", &n);
	while(n>0){
		scanf("%d%d", &x, &y);
		while(contador<y){
			if((x%2)!=0){
				soma=soma+x;
				contador++;
			}
			x++;
		}
		contador=0;
		printf("%d\n", soma);
		soma=0;
		n--;	
	}
	return 0;
}
