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
	
	if (op=='+'){
		float result=n1+n2;
		cout <<result;
	}
	else if (op=='-'){
		float result=n1-n2;
		cout <<result;
	}
	else if (op=='*'){
		float result=n1*n2;
		cout <<result;
	}
	else if (op=='/'){
		float result=n1/n2;
		cout <<result;
	}
	else if (op=='^'){
		float result= pow(n1, n2);
		cout <<result;
	}
	else{
		cout <<"Error!";
	}
	return 0;
}