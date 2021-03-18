#include <stdio.h>

int main(){
	int lesmatop=0, velocidade=0, grupo=0;
	while(scanf("%d", &grupo) != EOF ){
		while(grupo>0){
			scanf("%d", &velocidade);
			if(lesmatop<velocidade){
				lesmatop=velocidade;
			}
			grupo--;
		}
		if(lesmatop<10){
			printf("1\n");
		}
		if(lesmatop>=10 && lesmatop<20){
			printf("2\n");
		}
		if(lesmatop>=20){
			printf("3\n");
		}
	}
	return 0;
}
