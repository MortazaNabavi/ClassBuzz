#include <iostream>
using namespace std;
int main(){
	float price, disRate, discount, pay;
	cout <<"Enter Price: ";
	cin >>price;
	cout <<"Enter Discount Rate: ";
	cin >>disRate;
	discount =price*disRate/100;
	pay= price-discount;
	cout <<"PAY: " <<pay<<" AFNs";
	return 0;
}