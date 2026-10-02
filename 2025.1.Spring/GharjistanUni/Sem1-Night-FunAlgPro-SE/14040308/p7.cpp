#include <iostream>
#include <math.h>
using namespace std;
int main(){
	while(true){
		cout<<"Enter Num1 & Num2 & Operator:\t";
		double a,b;
		char c;
		cin>>a>>c>>b;
		
		switch (c){
			case '+':
				cout<<a+b;break;
			case '-':
				cout<<a-b;
				break;
			case '*':
				cout<<a*b;
				break;
			case '^':
				cout<<pow(a,b);
				break;
			default:
				cout<<"Error!";
		}
		
		cout<<endl<<endl;
	}
	
	return 0;
}