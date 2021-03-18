#include <stdio.h>

float main(){
	int codigo1, numero1, codigo2, numero2;
	float valor_unitario1, valor_unitario2, total, valortotal1, valortotal2;
	scanf ("%d%d%f", &codigo1, &numero1, &valor_unitario1);
	scanf ("%d%d%f", &codigo2, &numero2, &valor_unitario2);
	
					//PRIMEIRA//
	valortotal1 = numero1 * valor_unitario1;
	
					//SEGUNDA// 
	valortotal2 = numero2 * valor_unitario2;
	
	
	total = valortotal1 + valortotal2;
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	return 0;
}
