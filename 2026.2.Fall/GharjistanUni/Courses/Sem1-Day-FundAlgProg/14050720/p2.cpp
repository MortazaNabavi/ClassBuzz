#include <iostream>
using namespace std;
int main(){
	cout <<"Enter Electrical Usage: ";
	float usage;
	cin >>usage;
	float fee =3;
	float stationary =20;
	float box =200;
	float pay= fee*usage + box + stationary;
	cout<< "PAY: "<<pay;
	return 0;
}