#include <stdio.h>

int main(void){
	int casos=0, x=0, cont=0, divisoes=0;
	scanf("%d", &casos);
	while(casos>0){
		scanf("%d", &x);
		cont=x;
		while(cont>0){
			if(x%cont==0){
				divisoes++;
				
			}
			cont--;
		}
		if(divisoes==2){
			printf("%d eh primo\n", x);
		}
		else{
			printf("%d nao eh primo\n", x);
		}
		divisoes=0;
		casos--;
	}
	return 0;
}
