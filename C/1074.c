#include <stdio.h>

int main(){
	int n, valores;
	scanf("%d", &n);
	do{
		scanf("%d", &valores);
		n--;
		if(valores==0){
			printf("NULL\n");
		}
		if ((valores%2)==0 && valores!=0){
			printf("EVEN ");
			if(valores>0){
				printf("POSITIVE\n");
			}
			else{
				printf("NEGATIVE\n");
			}
		}
		if ((valores%2)!=0 && valores!=0){
			printf("ODD ");
			if(valores>0){
				printf("POSITIVE\n");
			}
			else{
				printf("NEGATIVE\n");
			}	
		}
	}
	while(n>0);
	return 0;
}
