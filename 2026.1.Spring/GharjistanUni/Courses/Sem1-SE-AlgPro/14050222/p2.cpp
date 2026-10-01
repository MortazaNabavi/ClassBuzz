#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a Number: ";
	int number;
	cin>>number;
	
	int firstDigit=number/10;
	int secondDigit=number%10;
	
	cout<<"First Digit: "<<firstDigit;
	cout<<" Second Digit: "<<secondDigit;
}