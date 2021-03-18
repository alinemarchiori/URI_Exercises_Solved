#include <stdio.h>

float main(){
	float N1, N2, N3, N4, soma, media, notaexame, somaexame;
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	soma = ((N1*2) + (N2*3) + (N3*4) + (N4*1));
	media = (soma/10.0);
	
	if(media>=7.0){
		printf("Media: %.1f\nAluno aprovado.\n", media);
	}
	if(media<5.0){
		printf("Media: %.1f\nAluno reprovado.\n", media);
	}
	if(media>=5.0 && media<=6.9){
		//printf("Media: %.1f\nAluno em exame.\n", media);
		scanf ("%f", &notaexame);
		
		somaexame = (media + notaexame)/2.0;
		if(somaexame>=5.0){	
			printf("Media: %.1f\nAluno em exame.\n", media);
			printf("Nota do exame: %.1f\n", notaexame);
			printf("Aluno aprovado.\nMedia final: %.1f\n", somaexame);
		}
		else{
			printf("Media: %.1f\nAluno em exame.\n", media);
			printf("Nota do exame: %.1f\n", notaexame);
			printf("Aluno reprovado.\nMedia final: %.1f\n", somaexame);	
		}
		
	}
	return 0;
}
