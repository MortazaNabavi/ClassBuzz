#include <iostream>
using namespace std;
int main(){
	float price;
	cin >>price;
	
	float disRate;
	cin >>disRate;
	
	float payRate= 100-disRate;
	float pay= price*payRate/100;
	cout <<pay;
	return 0;	
}