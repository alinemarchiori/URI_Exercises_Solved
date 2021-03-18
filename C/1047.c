#include <stdio.h>

int main(){
	int horainicial, horafinal, duracao, minutoinicial, minutofinal, duracaominutos;
	scanf("%d%d%d%d", &horainicial, &minutoinicial, &horafinal, &minutofinal);
	
	if(minutofinal >= minutoinicial){
		duracaominutos = minutofinal - minutoinicial;	
	}
	else{
		duracaominutos = (60-minutoinicial)+minutofinal;	
	}
	if(horafinal >= horainicial){
		duracao = horafinal - horainicial;
		if(duracao == 1 && minutofinal!=0 && minutoinicial!=0){
			duracao = 0;
		}
	}
	else{
		duracao = (24-horainicial)+horafinal;
		if(horainicial==horafinal&&minutofinal!=minutoinicial){
			duracao--;
		}
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao, duracaominutos);
	return 0;
	
}
