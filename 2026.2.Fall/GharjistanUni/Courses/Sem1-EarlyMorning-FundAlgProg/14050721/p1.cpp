#include <iostream>
using namespace std;
int main(){
	float price, disRate;
	cin >>price;
	cin >>disRate;
	float discount= price*disRate/100;
	float pay= price-discount;
	cout<< pay;
	return 0;
}