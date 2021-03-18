#include <stdio.h>

double main(){
	double a, b, c, perimetro, area;
	scanf("%lf%lf%lf", &a, &b, &c);
	if ((a+b)>c && (a+c)>b && (b+c)>a){
	//if (abs(b-c)<a && a<(b+c) && abs(a-c)<b && b<(a+c) && abs(a-b)<c && c<(a+b)){
		perimetro = a+b+c;
		printf ("Perimetro = %.1lf\n", perimetro);
	}
	else{
		area = ((a+b)*c)/2;
		printf ("Area = %.1lf\n", area);
	}
	return 0;
}
