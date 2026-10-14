#include <iostream>
using namespace std;
int main(){
	float price, disRate, payRate, pay;
	cout <<"Enter Price: ";
	cin >>price;
	cout <<"Enter Discount Rate: ";
	cin >>disRate;
	payRate= 100-disRate;
	pay =price*payRate/100;
	cout <<"PAY: " <<pay<<" AFNs";
	return 0;
}