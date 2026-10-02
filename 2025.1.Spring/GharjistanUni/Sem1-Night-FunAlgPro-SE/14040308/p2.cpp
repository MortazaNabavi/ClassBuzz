#include <iostream>
#include <math.h>
using namespace std;
int main(){
	while(true){
		cout<<"Enter Num1 & Num2 & Operator:\t";
		double a,b;
		char c;
		cin>>a>>c>>b;
		
		if (c=='+')
			cout<<a+b;
		else if (c=='-')
			cout<<a-b;
		else if (c=='*'){
			double g=a*b;
			cout<<g;
		}else if (c=='/')
			cout<<a/b;
		else if (c=='^')
			cout<<pow(a,b);
		else if(c=='%'){
			int a1,b1;
			a1=a;
			b1=b;
			cout<<a1%b1;
		}
		else if (c=='$')
			cout<<sqrt(a);
		else
			cout<<"Error! :/";
			
		cout<<"\n_____________________________________"<<"\n";
	}
	
	return 0;
}