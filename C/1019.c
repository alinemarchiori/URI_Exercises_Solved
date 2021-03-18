#include <stdio.h>
int main(){
	int segundos, horas, minutos, segundo;
	
	scanf("%d", &segundos);
	
	horas = segundos/3600;
	minutos = (segundos%3600)/60;
	segundo = (segundos%3600)%60;
	
	printf("%d:%d:%d\n", horas, minutos, segundo);
	
	return 0;
}
