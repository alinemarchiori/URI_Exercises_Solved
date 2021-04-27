#include <stdio.h>
#include <math.h>

struct ponto{
	int x, y;
} vetor_pontos[4];

int main(){
	int i = 0, j = 0;
	float resultado = 0.0, auxiliar = 0.0;
	for(i = 0;i < 4;i++){
		scanf("%d%d",&vetor_pontos[i].x, &vetor_pontos[i].y);
	}
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
			auxiliar = sqrt(pow(vetor_pontos[j].x - vetor_pontos[i].x,2) + pow(vetor_pontos[j].y - vetor_pontos[i].y,2));
			if(resultado<auxiliar){
				resultado = auxiliar;
			}
		}	
	}
	printf("A maior distancia entre os pontos for: %.2f\n", resultado);
    return 0;
}
