#include<stdio.h>
//nao deu certo, nao sei o que tem de errado.
int main(void){
	int pa, pb, teste=0, anos=0, auxiliarpa=0, auxiliarpb=1;
	double taxa1, taxa2, populacaopa=0, populacaopb=0;
	scanf("%d", &teste);
	while(teste>0){
		scanf("%d%d%lf%lf", &pa, &pb, &taxa1, &taxa2);
		populacaopa=pa;
		printf("pa %lf\n", populacaopa);
		populacaopb=pb;
		printf("pb %lf\n", populacaopb);
		while(auxiliarpa<auxiliarpb){
			double populacaopa=populacaopa+(pa*(taxa1/100.0));
			double populacaopb=populacaopb+(pb*(taxa2/100.0));
			printf("pa %lf\n", populacaopa);
			printf("pb %lf\n", populacaopb);
			anos++;
			int auxiliarpa=populacaopa;
			int auxiliarpb=populacaopb;
			if(anos>100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(anos<100){
			printf("%d anos.\n", anos);
		}
		populacaopa=0;
		populacaopb=0;
		auxiliarpa=0;
		auxiliarpb=1;
		anos=0;
		teste--;
	}
	return 0;
}
