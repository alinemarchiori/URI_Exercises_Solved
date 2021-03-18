#include <stdio.h>
int main(){
	int n, cont=1, cont2=3;
	scanf("%d", &n);
	while(n>0){
		while(cont2>0){
			printf("%d ", cont);
			cont++;
			cont2--;
		}
		printf("PUM\n");
		cont++;
		cont2=3;
		n--;
	}
	return 0;
}
