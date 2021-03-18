#include <iostream> // não deu certo
using namespace std;

int main(void){
	int n=1, i=0, j=0;
	while(true){
		cin >> n;
		if(n==0){
			break;
		}else{
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(i==0 or i==n-1 or j==0 or j==n-1){
						cout << "1";
						if(i!=n-1 or j!=n-1){
							cout << "   ";
						}
					}else{
						cout << "2";
						if(i!=n-1 or j!=n-1){
							cout << "   ";
						}
					}
				}
				cout << endl;
			}
		}
		cout << endl;
	}
}
