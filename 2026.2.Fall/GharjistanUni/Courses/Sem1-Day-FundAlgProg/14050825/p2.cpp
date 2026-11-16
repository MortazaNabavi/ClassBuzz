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
	
	float result;
	
	if (op=='+')
		result=n1+n2;
	else if (op=='-')
		result=n1-n2;
	else if (op=='*')
		result=n1*n2;
	else if (op=='/')
		result=n1/n2;
	else if (op=='^')
		float result= pow(n1, n2);
	else
		cout <<"Error!";
	
	cout<<result;
	return 0;
}