#include <iostream>
using namespace std;
int main(){
	int buy, sell;
	cout<<"Buy, Sell:";
	cin>>buy>>sell;
	
	if (buy>sell)
		cout<<"Zarrar"<<buy-sell;
	else
		cout<<"Sood"<<sell-buy;
	return 0;
}