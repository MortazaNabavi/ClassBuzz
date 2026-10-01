#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a Number: ";
	int number;
	cin>>number;

	int firstDigit=number/10;
	int secondDigit=number%10;
	
	int reverse;
	reverse=secondDigit*10+firstDigit;
	cout<<reverse;
}