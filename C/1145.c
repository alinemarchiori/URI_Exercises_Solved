#include<stdio.h>
int main(){
	int x, y, cont=1, reserva;
	scanf("%d%d", &x, &y);
	reserva=x;
	while(cont<=y){
		x=reserva;
		while(x>0){
			printf("%d", cont);
			cont++;
			x--;
			if(x>0){
				printf(" ");
			}
			else{
				printf("\n");	
			}
		}
	}
	return 0;
}
