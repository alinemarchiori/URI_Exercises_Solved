#include <stdio.h>

int main(){
	int primeiro, segundo;
	scanf("%d%d", &primeiro, &segundo);
	
	if((primeiro%segundo) == 0 || (segundo%primeiro) == 0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");
	}
	return 0;
}
