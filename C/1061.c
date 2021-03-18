#include <stdio.h>

int main(){
	char  dia[3], dia2[3], doispontos[2], doispontos1[2], doispontos2[2], doispontos3[2], doispontos4[2];
	int primeirodia, segundodia, hora, minuto, segundo, hora2, minuto2, segundo2;
	int duracao_em_dias, duracao_em_horas, duracao_em_minutos, duracao_em_segundos;
	scanf("%s%d", &dia, &primeirodia);
	scanf("%d%s%d%s%d", &hora, doispontos1, &minuto, doispontos, &segundo); 
	scanf("%s%d", &dia2, &segundodia);
	scanf("%d%s%d%s%d", &hora2, doispontos3, &minuto2, doispontos4, &segundo2);
	
	if(primeirodia == segundodia){
		duracao_em_dias = 0;
		printf("%d dia(s)\n", duracao_em_dias);
		duracao_em_horas = hora2 - hora;
		printf("%d hora(s)\n", duracao_em_horas);
		duracao_em_minutos = minuto2 - minuto;
		printf("%d minuto(s)\n", duracao_em_minutos);
		duracao_em_segundos = segundo2 - segundo;
		printf("%d segundo(s)\n", duracao_em_segundos);
	}
	else{
		duracao_em_horas = (24-hora)+hora2;	
		if(duracao_em_horas>=24){
			segundodia++;
			duracao_em_horas=duracao_em_horas-24;
		}
		duracao_em_dias = segundodia - primeirodia - 1;
		printf("%d dia(s)\n", duracao_em_dias);
		printf("%d hora(s)\n", duracao_em_horas);
		duracao_em_minutos = minuto2-minuto;
		duracao_em_segundos = segundo2-segundo;
		
		if(duracao_em_segundos==-1){
			duracao_em_segundos=59;
			duracao_em_minutos=59;
			printf("%d minuto(s)\n", duracao_em_minutos);
			printf("%d segundo(s)\n", duracao_em_segundos);
		}
		else{
			printf("%d minuto(s)\n", duracao_em_minutos);
			printf("%d segundo(s)\n", duracao_em_segundos);
		}
	}
	return 0;
}
