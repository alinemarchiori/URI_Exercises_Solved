#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(void){
	int a=0, b=0, matriz[200][200], um=0, dois=0, tres=0;
	int zero =0;
	cin >> a >> b;
	priority_queue <int> fila;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >> matriz[i][j];
			if(matriz[i][j]==1){
				um++;
			}else if(matriz[i][j]==2){
				dois++;
			}else if(matriz[i][j]==3){
				tres++;
			}else{
				zero++;
			}
		}
	}
	fila.push(um);
	fila.push(dois);
	fila.push(tres);
	if(fila.top()==1){
		cout << "1\n";
	}else if(fila.top()==2){
		cout << "2\n";
	}else if(fila.top()==3){
		cout << "3\n";
	}
}
