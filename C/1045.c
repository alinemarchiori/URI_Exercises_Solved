#include <stdio.h>
#include <math.h>

double main(){
	double a, b, c, A, B, C;
	scanf("%lf%lf%lf", &a, &b, &c);
	A = pow(a,2);
	B = pow(b,2);
	C = pow(c,2);
	if(a>=(b+c)){
		printf("NAO FORMA TRIANGULO\n");
	}
	if(A==(B+C)){
		printf("TRIANGULO RETANGULO\n");
	}
	if(A>(B+C)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if(A<(B+C)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(a == b && a == c){
		printf("TRIANGULO EQUILATERO\n");
	}
	if(a==b || a==c && a!=b || a!=c){
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
