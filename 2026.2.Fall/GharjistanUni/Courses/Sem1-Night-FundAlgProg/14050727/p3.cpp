#include <iostream>
using namespace std;
int main(){
	int x;
	cin >>x;
	int firstDigit=x/10;
	int secondDigit=x%10;
	cout<<firstDigit<<" , "<<secondDigit;
	return 0;
}