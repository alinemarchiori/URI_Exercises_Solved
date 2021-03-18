#include <stdio.h>
int main(){
	int n;
	float x, y, divisao;
	scanf("%d", &n);
	do{
		scanf("%f%f", &x, &y);
		if(y==0){
			printf("divisao impossivel\n");
		}
		else{
			divisao = x/y;
			printf("%.1f\n", divisao);
		}
		n--;
	}
	while(n!=0);
	return 0;
}
