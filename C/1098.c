#include <stdio.h>

int main(){
	float i=0.0, f1=1.0, f2=2.0, f3=3.0;
	int cont;
	while(i<2.1){
		cont=3;
		while (cont>0){
			if(i==0 || i==1 || i>1.9){
				printf("I=%.0f ", i);
				if (cont==3){
					printf("J=%.0f\n", f1);
					f1=f1+0.2;
				}
				if(cont==2){
					printf("J=%.0f\n", f2);
					f2=f2+0.2;
				}
				if(cont==1){
					printf("J=%.0f\n", f3);
					f3=f3+0.2;
				}
				cont--;
			}
			else{
				printf("I=%.1f ", i);
				if (cont==3){
					printf("J=%.1f\n", f1);
					f1=f1+0.2;
				}
				if(cont==2){
					printf("J=%.1f\n", f2);
					f2=f2+0.2;
				}
				if(cont==1){
					printf("J=%.1f\n", f3);
					f3=f3+0.2;
				}
				cont--;
			}		
		}
		i=i+0.2;
	}
	return 0;
}

