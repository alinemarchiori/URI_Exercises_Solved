#include<stdio.h>

int main(){
	int n, x, sim=0, nao=0;
	scanf("%d", &n);
	do{
		scanf("%d", &x);
		if(x>=10 && x<=20){
			sim++;
		}
		else{
			nao++;
		}
		n--;
	}
	while(n>0);
	printf("%d in\n%d out\n", sim, nao);
	return 0;
}
