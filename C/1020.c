#include <stdio.h>
int main(){
	int tudo, dias, meses, anos;
	
	scanf("%d", &tudo);
	
	anos = tudo/365;
	meses = (tudo%365)/30;
	dias = (tudo%365)%30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
	
	return 0;
}
