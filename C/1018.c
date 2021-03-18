#include <stdio.h>

int main(){
	int dinheiro, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	scanf("%d", &dinheiro);
	
	notas100 = (dinheiro/100);
		notas50 = (dinheiro%100)/50;
			notas20 = ((dinheiro%100)%50)/20;
				notas10 = (((dinheiro%100)%50)%20)/10;
			notas5 = ((((dinheiro%100)%50)%20)%10)/5;
		notas2 = (((((dinheiro%100)%50)%20)%10)%5)/2;
	notas1 = ((((((dinheiro%100)%50)%20)%10)%5)%2)/1;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", dinheiro, notas100, notas50, notas20, notas10, notas5, notas2, notas1);
	return 0;
}
