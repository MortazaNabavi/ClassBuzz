#include <iostream>
using namespace std;
int main(){
	float price, disRate, discount, pay;
	cin >>price;
	cin >>disRate;
	discount =price*disRate/100;
	pay= price-discount;
	cout <<pay;
	return 0;
}