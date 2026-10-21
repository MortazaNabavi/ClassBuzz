#include <iostream>
using namespace std;
int main(){
	int number;
	cout <<"Enter 2-Digit Number: ";
	cin >>number;
	
	int firstDigit= number/10;
	int secondDigit= number%10;
	int reverse= secondDigit*10 + firstDigit;

	cout <<reverse;
	return 0;
}