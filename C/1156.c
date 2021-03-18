#include <stdio.h>

int main(void){
	double s=1.0, vaca=3.0, vaquinha=2.0;
	while(vaca<=39.0){
		s=s+(vaca/vaquinha);
		vaca=vaca+2.0;
		vaquinha=vaquinha+vaquinha;
	}
	printf("%.2lf\n", s);
	return 0;
}
