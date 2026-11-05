#include <iostream>
using namespace std;
int main(){
	int x;
	cout <<"Enter 1-Digit Number [0-9]:\t";
	cin>>x;
	
	if (x==0)
		cout <<"Zero";
	if (x==1)
		cout <<"One";
	if (x==2)
		cout <<"Two";
	if (x==3)
		cout <<"Three";
	if (x==4)
		cout <<"Four";
	if (x==5)
		cout <<"Five";
	if (x==6)
		cout <<"Six";
	if (x==7)
		cout <<"Seven";
	if (x==8)
		cout <<"Eight";
	if (x==9)
		cout <<"Nine";
	else
		cout <<"ERROR!";
	
	return 0;	
}