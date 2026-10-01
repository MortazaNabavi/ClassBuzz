#include <iostream>
using namespace std;
int main(){
	float Buy, DiscountRate;
	cin>>Buy >>DiscountRate;
	float PayRate=100-DiscountRate;
	float Pay=Buy*PayRate/100;
	cout<<Pay;
}