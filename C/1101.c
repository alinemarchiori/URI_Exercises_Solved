#include <stdio.h>
int main(){
	int n=1, m=1, soma=0;
	while(1){
		soma=0;
		scanf("%d%d", &n, &m);
		if(n==0 || m==0 || n<0 || m<0){
			break;
		}
		if(n>=m){
			while(n>=m){
				soma = soma+m;
				printf("%d ", m);
				m++;
			}
			printf("Sum=%d\n", soma);
		}
		else{
			while(m>=n){
				soma = soma+n;
				printf("%d ", n);
				n++;
			}
			printf("Sum=%d\n", soma);
		}
	}
	return 0;
}
