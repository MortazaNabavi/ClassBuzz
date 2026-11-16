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
	
	if (op=='+')
		cout <<n1+n2;
	else if (op=='-')
		cout <<n1-n2;
	else if (op=='*')
		cout <<n1*n2;
	else if (op=='/')
		cout <<n1/n2;
	else if (op=='^')
		cout <<pow(n1, n2);
	else
		cout <<"Error!";
	
	return 0;
}