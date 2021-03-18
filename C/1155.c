#include<stdio.h>

int main(){
	int vaquinha=0;
	float S=0.0, vaca=1.0;
	while(vaquinha<100){
		S=(1.0/vaca)+S;
		vaca=vaca+1.0;
		vaquinha++;
	}
	printf("%.2f\n", S);
	return 0;
}
