#include <iostream> // deu errado
#include <cctype>
#include <locale>
using namespace std;

string frase(string F){
	int tamanho=F.size();
	int cont=2;
	for(int i=0;i<tamanho;i++){
		if(isalpha(F[i])){
			if(cont%2==0){
				char f = toupper(F[i]);
				F[i]=f;
				cont++;
			}
			else{
				char d = tolower(F[i]);
				F[i]=d;
				cont++;
			}
		}
	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);
	
	cout << frase(F) << "\n";
}
