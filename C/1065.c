#include <stdio.h>

int main(){
	int valores=0, pares=0, contador=0;
	do{
		scanf("%d", &valores);
		contador++;
		if((valores%2)==0){
			pares++;
		}
	}
	while(contador<5);
	printf("%d valores pares\n", pares);
	return 0;
}
