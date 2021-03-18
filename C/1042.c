#include <stdio.h>

int main(){
	int primeiro, segundo, terceiro;
	scanf("%d%d%d", &primeiro, &segundo, &terceiro);
	
	if(primeiro>=terceiro && primeiro>=segundo){
		if(segundo>=terceiro){
			printf("%d\n%d\n%d\n\n", terceiro, segundo, primeiro);
			printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);
		}
		if(terceiro>segundo){
			printf("%d\n%d\n%d\n\n", segundo, terceiro, primeiro);
			printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);
		}
	}
	if(segundo>=terceiro && segundo>primeiro){
		if(terceiro>primeiro){
			printf("%d\n%d\n%d\n\n", primeiro, terceiro, segundo);
			printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);
		}
		if(primeiro>terceiro){
			printf("%d\n%d\n%d\n\n", terceiro, primeiro, segundo);
			printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);
		}
	}
	if(terceiro>=primeiro && terceiro>segundo){
		if(primeiro>segundo){
			printf("%d\n%d\n%d\n\n", segundo, primeiro, terceiro);
			printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);
		}
		if(segundo>primeiro){
			printf("%d\n%d\n%d\n\n", primeiro, segundo, terceiro);
			printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);
		}
	}
	
	return 0;
}
