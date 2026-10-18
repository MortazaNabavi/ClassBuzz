#include <iostream>
using namespace std;
int main(){
	int number, firstDigit, secondDigit;
	cin >>number;
	firstDigit= number/10;
	secondDigit= number%10;
	cout<<firstDigit <<" , "<<secondDigit;
	return 0;
}