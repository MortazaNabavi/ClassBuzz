#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n>=0 and n<=9)
		cout<<"1 Digit";
	else if (n>=100 && n<=999)
		cout<<"3 Digits";
	else if (n>=10 and n<100)
		cout<<"2 Digits";
	else
		cout<<"Error";
}