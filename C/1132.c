#include <stdio.h>
int main(){
	int x, y, soma=0;
	scanf("%d%d", &x, &y);
	if(x>y){
		while(y<=x){
			if((y%13)!=0){
				soma=soma+y;
			}
			y++;
		}
	}
	else{
		while(x<=y){
			if((x%13)!=0){
				soma=soma+x;
			}
			x++;
		}
	}
	printf("%d\n", soma);
	return 0;
}
