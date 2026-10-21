#include <iostream>
using namespace std;
int main(){
	int number;
	cin >>number;
	
	int firstDigit= number/10;
	int secondDigit= number%10;
	
	cout<<firstDigit <<" , "<<secondDigit;
	return 0;
	
}