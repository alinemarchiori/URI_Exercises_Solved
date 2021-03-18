#include <stdio.h>
int main(){
	int escolha, grenais=0, empates=0, vitoriasgremio=0, vitoriasinter=0, golsgremio=0, golsinter=0, ginter=0, ggremio=0;
	while(1){
		scanf("%d%d", &ginter, &ggremio);
		golsinter=golsinter+ginter;
		golsgremio=golsgremio+ggremio;
		grenais++;
		if(ginter>ggremio){
			vitoriasinter++;
		}
		if(ginter<ggremio){
			vitoriasgremio++;
		}
		if(ginter==ggremio){
			empates++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &escolha);
		if(escolha==2){
			break;
		}
	}
	printf("%d grenais\n", grenais);
	printf("Inter:%d\n", vitoriasinter);
	printf("Gremio:%d\n", vitoriasgremio);
	printf("Empates:%d\n", empates);
	if(vitoriasinter==vitoriasgremio){
		printf("Nao houve vencedor\n");
	}
	else{
		if(vitoriasinter>vitoriasgremio){
			printf("Inter venceu mais\n");
		}
		else{
			printf("Gremio venceu mais\n");
		}
	}
	return 0;
}
