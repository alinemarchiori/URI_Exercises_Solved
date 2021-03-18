#include <stdio.h>
#include <math.h>

float main(){
	float x1, x2, y1, y2, p1, p2, soma, raiz;
	
	scanf("%f%f", &x1, &y1);
	scanf("%f%f", &x2, &y2);
	
	soma = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	printf("%.4f\n", soma);
	
	return 0;
}
