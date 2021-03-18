#include <stdio.h>

int main(){
	int quantidade_casos, inicial, final, impares;
	scanf("%d", &quantidade_casos);
	do{
		impares=0;
		scanf("%d%d", &inicial, &final);
		if(final==inicial){
			printf("0\n");
		}
		if(inicial>final){
			do{
				inicial--;
				if((inicial%2)!=0 && inicial!=final){
					impares = inicial + impares;
				}
				
			}
			while(inicial>final);
			printf("%d\n", impares);
		}
		if(final>inicial){
			do{
				final--;
				if((final%2)!=0 && final!=inicial){
					impares = final + impares;
				}
				
			}
			while(final>inicial);
			printf("%d\n", impares);
		}
		quantidade_casos--;
	}
	while(quantidade_casos>0);
	return 0;
}
