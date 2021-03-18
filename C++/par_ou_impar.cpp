#include <iostream>
using namespace std;

int main (){
	int n, teste;
	cin >> n;
	while(n>0){
		cin >> teste;
		if(teste==0){
			cout << "NULL\n";
		}
		else if(teste>0){
			if((teste%2)==0){
				cout << "EVEN ";
			}else{
				cout << "ODD ";
			}
			cout << "POSITIVE\n";
		}else{
			if((teste%2)==0){
				cout << "EVEN ";
			}else{
				cout << "ODD ";
			}
			cout << "NEGATIVE\n";	
		}
		n--;
	}
	
	return 0;
}
