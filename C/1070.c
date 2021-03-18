#include <stdio.h>

int main(){
	int x=0, contador=0;
	scanf("%d", &x);
	do{
		x++;
		if((x%2)!=0){
			printf("%d\n", x);
			contador++;	
		}
	}
	while(contador<6);
	return 0;
}
