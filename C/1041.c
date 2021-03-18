#include <stdio.h>

float main(){
	float x, y;
	scanf("%f%f", &x, &y);
	
	if (x==y && x==0.0){
		printf("Origem\n");
	} 
		if (x>0){
			if(y>0){
				printf("Q1\n");
			}
				if(y<0){
					printf("Q4\n");
				}
		}
					if (x<0){
						if(y>0){
							printf("Q2\n");
						}
							if(y<0){
								printf("Q3\n");
							}
					}
								if(y==0 && x!=0){
									printf("Eixo X\n");
								}
									if(x==0 && y!=0){
										printf("Eixo Y\n");
									}
			
	return 0;
}
