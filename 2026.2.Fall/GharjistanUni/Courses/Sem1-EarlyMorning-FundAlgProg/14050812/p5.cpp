#include <iostream>
using namespace std;
int main(){
	int x;
	cout <<"Enter 1-Digit Number [0-9]:\t";
	cin>>x;
	
	switch (x)
	{
		case 0: cout<<"Zero";
		case 1: cout<<"One";
		case 2: cout<<"Two";
		case 3: cout<<"Three";
		case 4: cout<<"Four";
		case 5: cout<<"Five";
		case 6: cout<<"Six";
		case 7: cout<<"Seven";
		case 8: cout<<"Eight";
		case 9: cout<<"Nine";
		default: cout<<"Error!";
	}
	
	return 0;	
}