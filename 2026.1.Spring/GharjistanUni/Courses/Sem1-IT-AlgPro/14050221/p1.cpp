#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a number:";
	cin>>number;
	
	int firstDigit=number/10;
	int secondDigit=number%10;
	
	cout<<"First Digit is "<<firstDigit<<endl;
	cout<<"Second Digit is "<<secondDigit<<endl;
}