#include <stdio.h>

float main(){
	float valor, valor2, valor3, media;
	int n;
	scanf("%d", &n);
	do{
		scanf("%f%f%f", &valor, &valor2, &valor3);
		media = ((valor*2)+(valor2*3)+(valor3*5))/10;
		printf("%.1f\n", media);
		n--;	
	}
	while(n!=0);
	return 0;
}
