#include <iostream>
using namespace std;
int main(){
	cout <<"Enter 2-Digit Number: ";
	int x;
	cin >>x;
	int firstDigit=x/10;
	int secondDigit=x%10;
	cout <<"Left Digit is "<<firstDigit;
	cout <<" and Right Digit is "<<secondDigit;
	return 0;
}