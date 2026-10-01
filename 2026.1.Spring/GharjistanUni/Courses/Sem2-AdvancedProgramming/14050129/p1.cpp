#include <iostream>
using namespace std;
int main(){
	int amount, discount, pay;
	cout<<"Please Enter Amount: ";
	cin>> amount;
	
	if (amount<10000)
		discount=amount*.15;
	else
		discount=amount*.2;
	
	pay=amount-discount;
	
	cout<<"Total:\t"<<amount<<"\nDiscount:\t";
	cout<<discount<<"\nPAY\t"<<pay;
}