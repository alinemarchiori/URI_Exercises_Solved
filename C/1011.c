#include <stdio.h>
#include <math.h>

double main(){
	double raio, pi, volume, gato, vaca;
	pi = 3.14159;
	
	scanf("%lf", &raio);
	gato = (4/3.0);
	vaca = pow(raio,3);
	volume = gato * pi * vaca;
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
