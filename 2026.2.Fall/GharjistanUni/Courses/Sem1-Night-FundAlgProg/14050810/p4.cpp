#include <iostream>
using namespace std;
int main(){
	int x;
	cout <<"Enter 1-Digit Number [0-4]:\t";
	cin >>x;
	
	switch (x){
		case 0: cout <<"Zero";
		case 1: cout <<"One";
		case 2: cout <<"Two";
		case 3: cout <<"Three";
		case 4: cout <<"Four";
		default: cout <<"Error!";
	}

	return 0;
}