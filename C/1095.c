#include <stdio.h>

int main(){
	int i=1, j=60;
	while(j>=0){
		printf("I=%d ", i);
		i+=3;
		printf("J=%d\n", j);
		j-=5;
	}
	return 0;
}
