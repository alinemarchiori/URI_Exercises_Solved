#include <stdio.h>

int main(){
	int a=1, cont=1;
	while(a!=0){
		scanf("%d", &a);
		while(cont<=a){
			printf("%d", cont);
			if(a>cont){
				printf(" ");
			}
			else{
				printf("\n");
			}
			cont++;
		}
		cont=1;
	}
	return 0;
}
