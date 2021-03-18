#include <iostream>
using namespace std;

int main(){
	int quantidade=0;
	float grau = 0.0, notas[7], soma=0.0, maior=0.0, menor=10.0;
	string nome;
	cin >> quantidade;
	while(quantidade > 0){
		cin >> nome >> grau;
		soma=0.0, maior=0.0, menor=10.0;
		for(int i=0;i<7;i++){
			notas[i]=0.0;
			cin >> notas[i];
			if(maior < notas[i]){
				maior = notas[i];
			}if(menor > notas[i]){
				menor = notas[i];
			}
		}
		int cont1=0, cont2=0;
		for(int j=0;j<7;j++){
			if(notas[j] == maior and cont1 == 0){
				cont1=1;
			}else if(notas[j] == menor and cont2 == 0){
				cont2=1;
			}else{
				soma = soma + notas[j];
			}	
		}
		soma = soma*grau;
		cout.precision(2);
		cout << nome << " " << fixed << soma << endl;
		quantidade--;
	}
	return 0;
}
