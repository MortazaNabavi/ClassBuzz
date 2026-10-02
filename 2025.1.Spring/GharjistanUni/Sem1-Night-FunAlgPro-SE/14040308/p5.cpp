#include <iostream>
using namespace std;
int main(){
	while(1){
		char a;
		cout<<"\nEnter a Char: ";
		cin>>a;
		int b=a;
		b=b-1;
		a=b;
		cout<<a;
	}
	return 0;
}