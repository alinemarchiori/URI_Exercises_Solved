#include <iostream>
using namespace std;

int main(void){
	string a, b, c="";
	int n=0;
	cin >> n;
	for(int i=0;i<n;i++){
	c="";
	cin >> a >> b;
	int um, dois;
	um=a.size();
	dois=b.size();
	if(um<dois){
		for(int i=0;i<um;i++){
			c+=a[i];
			c+=b[i];
		}
		for(um;um<dois;um++){
			c+=b[um];
		}
	}else if(um==dois){
		for(int i=0;i<um;i++){
			c+=a[i];
			c+=b[i];
		}
	}else{
		for(int i=0;i<dois;i++){
			c+=a[i];
			c+=b[i];
		}
		for(dois;dois<um;dois++){
			c+=a[dois];
		}
	}
	cout<<c<<endl;
	}
}
