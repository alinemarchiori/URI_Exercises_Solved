#include <stdio.h>

int main(){
	int a=0, n=0, soma=0, cont=0;
	scanf("%d", &a);
	while(1){
		scanf("%d", &n);
		if(n>0){
			while(cont<n){
				soma=soma+cont+a;
				cont++;
			}
			break;
		}
	}
	printf("%d\n", soma);
	return 0;
}
