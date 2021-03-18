#include <iostream>
#include <vector>
using namespace std;

int main(void){
	string letra;
	cin >> letra;
	vector< vector<float> > matriz(12, vector<float>(12));
	for(int i=0;i<12;i++){for(int j=0;j<12;j++)cin >> matriz[i][j];}
	float soma=0;
	int cont=0;
	for(int i=1;i<=10;i++){
		if(i<=5){
			for(int j=0;j<=cont;j++){
				soma+=matriz[i][j];
			}
			cont++;
		}else{
			for(int j=cont-1;j>=0;j--){
				soma+=matriz[i][j];
			}
			cont--;
		}
	}
	float media=soma/30.0;
	cout.precision(1);
	cout.setf(ios::fixed);
	if(letra == "S"){
		cout << soma << endl;
	}else{
		cout << media << endl;
	}
}
