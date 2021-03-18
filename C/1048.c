#include <stdio.h>
float main(){
	float salario, percentual, novo;
	scanf("%f", &salario);
	if(salario>=0 && salario<=400.0){
		percentual = salario*0.15;
		novo = salario + percentual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novo, percentual);
	}
	if(salario>400.0 && salario<=800.0){
		percentual = salario*0.12;
		novo = salario + percentual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novo, percentual);
	}
	if(salario>800.0 && salario<=1200.0){
		percentual = salario*0.10;
		novo = salario + percentual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novo, percentual);
	}
	if(salario>1200.0 && salario<=2000.0){
		percentual = salario*0.07;
		novo = salario + percentual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novo, percentual);
	}
	if(salario>2000.0){
		percentual = salario*0.04;
		novo = salario + percentual;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novo, percentual);
	}
	
	return 0;
}
