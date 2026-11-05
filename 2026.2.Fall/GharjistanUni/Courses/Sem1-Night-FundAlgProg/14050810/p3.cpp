#include <iostream>
using namespace std;
int main(){
	int x;
	cout <<"Enter 1-Digit Number [0-4]:\t";
	cin >>x;
	
	switch (x)
	{
		case 0: cout <<"Zero"; break;
		case 1: cout <<"One"; break;
		case 2: cout <<"Two"; break;
		case 3: cout <<"Three"; break;
		case 4: cout <<"Four"; break;
		default: cout <<"Error!";
	}

	return 0;
}