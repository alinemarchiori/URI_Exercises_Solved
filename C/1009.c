#include <stdio.h>

double main() {
	char nome;
		double salario, vendas, calculo;
			scanf("%s", &nome);
				scanf("%lf%lf", &salario, &vendas);
					calculo = (salario + ((vendas * 15)/ 100));
				printf("TOTAL = R$ %.2lf\n", calculo);
			return 0;
}
