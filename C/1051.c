#include <stdio.h>

float main(){
	float renda, conta, imposto, imposto1, imposto2, imposto3, imposto4;
	scanf("%f", &renda);
	if(renda>=0 && renda<=2000){
		printf("Isento\n");
	}
	else{
		if(renda>2000 && renda<=3000){
			conta = renda - 2000.0;
			imposto = conta * 0.08;
			printf("R$ %.2f\n", imposto);
		}
		if(renda>3000 && renda<=4500){
			conta = renda - 2000.0;
			if(conta>=1000){
				conta = conta - 1000;
				imposto1 = conta * 0.18;
				imposto2 = 1000*0.08;
				imposto = imposto1+imposto2;
				printf("R$ %.2f\n", imposto);
			}
			else{
				imposto = conta * 0.08;
				printf("R$ %.2f\n", imposto);
			}
		}
		if(renda>4500){
//			conta = renda - 2000.0;
			imposto4 = 1000*0.08 + 1500 *0.18 +(renda - 4500)*0.28;
			imposto = imposto4;
			printf("R$ %.2f\n", imposto);


//			if(conta>=1000 && conta<=2500){
//				conta = conta - 1000;
//				imposto1 = conta * 0.18;
//				imposto2 = 1000*0.08;
//				imposto = imposto1+imposto2;
//				printf("R$ %.2f\n", imposto);
//			}
//			else{
//				conta = conta - 1000;
//				imposto2 = 1000*0.08;
//				if(conta>=4500){
//					conta = conta - 1500;
//					imposto1 = conta * 0.28;
//					imposto3 = 1500*0.18;
//					imposto = imposto1+imposto2+imposto3;
//					printf("R$ %.2f\n", imposto);
//				}
//				else{
//					imposto3 = conta * 0.28;
//					imposto1 = conta*0.18;
//					imposto = imposto1+imposto2;
//					printf("R$ %.2f\n", imposto);
//				}
//			}
		}
	}
	
	return 0;
}
