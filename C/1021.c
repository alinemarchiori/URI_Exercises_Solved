#include <stdio.h>

double main(){
	double moedas50, moedas25, moedas10, moedas5, moedas01;
	double notas100, notas50, notas20, notas10, notas5, notas2, moedas1, dinheiro;
	scanf("%lf", &dinheiro);
	
	notas100 = (dinheiro/100.0);
		notas50 = (dinheiro%100.0)/50.0;
			notas20 = ((dinheiro%100.0)%50.0)/20.0;
				notas10 = (((dinheiro%100.0)%50.0)%20.0)/10.0;
			notas5 = ((((dinheiro%100.0)%50.0)%20.0)%10.0)/5.0;
		notas2 = (((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)/2.0;
	moedas1 = ((((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)%2.0)/1.0;	
		moedas50 = (((((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)%2.0)%1.0)/0.5;	
			moedas25 = ((((((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)%2.0)%1.0)%0.5)/0.25;
				moedas10 = (((((((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)%2.0)%1.0)%0.5)%0.25)/0.1;
					moedas5 = ((((((((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)%2.0)%1.0)%0.5)%0.25)%0.1)/0.05;
						moedas01 = (((((((((((dinheiro%100.0)%50.0)%20.0)%10.0)%5.0)%2.0)%1.0)%0.5)%0.25)%0.1)%0.05)/0.01;
	printf("NOTAS:\n%lf nota(s) de R$ 100.00\n%lf nota(s) de R$ 50.00\n%lf nota(s) de R$ 20.00\n%lf nota(s) de R$ 10.00\n%lf nota(s) de R$ 5.00\n%lf nota(s) de R$ 2.00\n", notas100, notas50, notas20, notas10, notas5, notas2);
	printf("MOEDAS:\n%lf moeda(s) de R$ 1,00\n%lf moeda(s) de R$ 0,50\n%lf moeda(s) de R$ 0,20\n%lf moeda(s) de R$ 0,10\n%lf moeda(s) de R$ 0,05\n%lf moeda(s) de R$ 0,01\n", moedas1, moedas50, moedas20, moedas10, moedas5, moedas01);

	return 0;
}
