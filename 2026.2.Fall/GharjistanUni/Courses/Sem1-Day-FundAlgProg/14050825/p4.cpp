#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float n1, n2;
	char op;
	
	cout<<"Enter two numbers:\t";
	cin >> n1>> n2;
	
	cout <<"Enter operator:\t";
	cin>> op;
	
	switch (op){
		case '+': cout<<n1+n2; break;
		case '-': cout<<n1-n2; break;
		case '*': cout<<n1*n2; break;
		case '/': cout<<n1/n2; break;
		case '^': cout<<pow(n1, n2); break;
		default: cout<< "Error";
	}
	
	return 0;
}