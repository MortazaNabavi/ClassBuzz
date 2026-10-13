#include <iostream>
using namespace std;
int main(){
	float price, disRate;
	cout <<"Enter Price: ";
	cin >>price;
	cout <<"Enter Discount Rate: ";
	cin >>disRate;
	float discount= price*disRate/100;
	float pay= price-discount;
	cout<<"PAY: " <<pay <<" AFNs";
	return 0;
}