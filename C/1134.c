#include <stdio.h>
int main(){
	int codigo=0, alcool=0, gasolina=0, diesel=0;
	while(codigo!=4){
		scanf("%d", &codigo);
		if(codigo==1){
			alcool++;
		}
		if(codigo==2){
			gasolina++;
		}
		if(codigo==3){
			diesel++;
		}
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
	return 0;
}
