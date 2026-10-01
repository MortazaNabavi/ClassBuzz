#include <iostream>
using namespace std;
int main(){
	float Buy, DiscountRate;
	cin>>Buy >>DiscountRate;
	float DiscountAmount=Buy*DiscountRate/100;
	float Pay=Buy-DiscountAmount;
	cout<<Pay;
}