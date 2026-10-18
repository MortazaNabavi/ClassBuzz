#include <iostream>
using namespace std;
int main(){
	int number, firstDigit, secondDigit;
	cout<< "Enter 2-Digit Number: ";
	cin >>number;
	firstDigit= number/10;
	secondDigit= number%10;
	cout <<"First Digit: "<<firstDigit;
	cout <<"\nSecond Digit: "<<secondDigit;
	return 0;
}