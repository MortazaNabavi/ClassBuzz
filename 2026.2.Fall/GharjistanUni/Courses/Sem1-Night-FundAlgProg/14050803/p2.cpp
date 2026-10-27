#include <iostream>
using namespace std;
int main(){
	int x;
	cin >>x;
	int lDigit= x/10;
	int rDigit= x%10;
	
	if (lDigit > rDigit)
		cout <<lDigit;
	else
		cout <<rDigit;
	return 0;
}