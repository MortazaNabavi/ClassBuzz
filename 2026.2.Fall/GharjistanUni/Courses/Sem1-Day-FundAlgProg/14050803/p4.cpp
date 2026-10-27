#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout <<"Enter 1st Number: ";
	cin >>a;
	cout <<"Enter 2nd Number: ";
	cin >>b;
	if (a<b)
		cout <<b <<" is greater than "<<a;
	else
		cout <<a <<" is greater than "<<b;
	return 0;
}