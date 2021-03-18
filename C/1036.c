#include <stdio.h>
#include <math.h>

double main(){
	double A, B, C, delta, resultado1, resultado2;
	scanf("%lf%lf%lf", &A, &B, &C);
	delta = pow(B,2)-4*A*C;
	if (delta<0 || 2*A==0){
		printf("Impossivel calcular\n");
	}
	else{
		resultado1 = (-B+(sqrt(delta)))/(2*A);
		resultado2 = (-B-(sqrt(delta)))/(2*A);
		printf("R1 = %.5lf\n", resultado1);
		printf("R2 = %.5lf\n", resultado2);
	}
	return 0;
}
