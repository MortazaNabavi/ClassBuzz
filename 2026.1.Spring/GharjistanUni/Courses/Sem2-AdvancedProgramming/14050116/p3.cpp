#include <iostream>
using namespace std;
int main()
{
	float buy, discount, pay, pad;
	cin>> buy>> discount;
	pad=buy*discount/100;
	pay=buy-pad;
	cout<< pay;
}