#include <iostream>
using namespace std;
int main(){
	cout <<"Enter Price: ";
	float price;
	cin >>price;
	
	cout <<"Enter Discount Rate: ";
	float disRate;
	cin >>disRate;
	
	float payRate= 100-disRate;
	float pay= price*payRate/100;
	cout <<"PAY: " <<pay <<" AFNs";
	return 0;	
}