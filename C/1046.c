#include <stdio.h>

int main(){
	int horainicial, horafinal, duracao;
	scanf("%d%d", &horainicial, &horafinal);
	if(horafinal > horainicial){
		duracao = horafinal - horainicial;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	else{
		duracao = (24-horainicial)+horafinal;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	return 0;
}
