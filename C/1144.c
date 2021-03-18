#include<stdio.h>
#include<math.h>
int main(){
	int linhas, quadrado, cubo, numero=1; 
	scanf("%d", &linhas);
	while(linhas>0){
		quadrado=pow(numero,2);
		cubo=pow(numero,3);
		printf("%d %d %d\n", numero, quadrado, cubo);
		quadrado++;
		cubo++;
		printf("%d %d %d\n", numero, quadrado, cubo);
		numero++;
		quadrado=0;
		cubo=0;
		linhas--;	
	}
	return 0;
}
