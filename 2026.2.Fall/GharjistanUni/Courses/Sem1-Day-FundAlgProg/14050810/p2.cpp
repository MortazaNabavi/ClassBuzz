#include <iostream>
using namespace std;
int main(){
	int x;
	cout <<"Enter 1-Digit Number [0-2]:\t";
	cin >>x;
	
	switch (x)
	{
		case 0: cout <<"zero"; break;
		case 1:	cout <<"one"; break;
		case 2: cout <<"two"; break;
		
		default:cout<<"Error!";
	}	
	return 0;
}