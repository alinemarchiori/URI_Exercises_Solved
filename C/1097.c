#include <stdio.h>

int main(){
	int i=0, j=0, cont, f=5;
	while(1){
		cont=3;
		i++;
		j=f+2;
		if((i%2)!=0){
			while (cont>0){
				printf("I=%d ", i);
				printf("J=%d\n", j);
				j--;
				cont--;	
				}
			f=f+2;
			}
		if(i==9){
			return 0;
		}	
	}
	return 0;
}

