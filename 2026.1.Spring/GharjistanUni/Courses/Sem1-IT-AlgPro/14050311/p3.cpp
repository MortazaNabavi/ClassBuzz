#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if (n<0)
		cout<<"Error";
	else if (n<10)
		cout<<"1 Digit";
	else if (n<100)
		cout<<"2 Digits";
	else if (n<1000)
		cout<<"3 digits";
	else if (n<10000)
		cout<<"4 digits";
	else
		cout<<"Error";
}