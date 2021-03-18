#include <stdio.h>

int main(){
	int i=0, j, cont;
	while(1){
		cont=3;
		i++;
		j=7;
		if((i%2)!=0){
			while (cont>0){
				printf("I=%d ", i);
				printf("J=%d\n", j);
				j--;
				cont--;	
				}
			}
		if(i==9){
			return 0;
		}	
	}
	return 0;
}

