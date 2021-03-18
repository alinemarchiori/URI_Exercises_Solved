#include <stdio.h>

int main(){
	int x=0, contador=0;
	scanf("%d", &x);
	do{
		contador++;
		if((contador%2)!=0){
			printf("%d\n", contador);
		}
	}
	while(contador<x);
	return 0;
}
