#include <iostream>
using namespace std;
int main(){
	int x;
	cout <<"Enter 3-Digit Number:\t";
	cin >>x;
	
	int _1st= x/100;
	int _2nd= (x%100)/10;
	int _3rd= (x%100)%10;
	
	int sum= _1st + _2nd + _3rd;
	int reverse= _3rd*100 + _2nd*10 + _1st;
	
	cout <<"Sum of Digits: "<<sum<<endl;
	cout <<"Reverse: "<<reverse<<endl;
	
	return 0;
}