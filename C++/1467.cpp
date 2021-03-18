#include <iostream>
using namespace std;

int main(){
	int Alice, Beto, Clara;
	while(cin >> Alice >> Beto >>Clara){
		
		if(Alice == Beto and Alice == Clara){
		cout << "*\n";
		}
		else{
			if(Alice==Beto){
				cout << "C\n";
			}
			else{
				if(Alice==Clara){
					cout << "B\n";
				}
				else{
					cout << "A\n";
				}
			}
		}
	}
	return 0;
}
