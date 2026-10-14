#include <iostream>
using namespace std;
int main()
{
	float usage;
	cout <<"Enter Electrical Usage: ";
	cin >>usage;
	float fee= 3;
	float box= 200;
	float stationary=20;
	float pay= usage*fee +box+stationary;
	cout <<"PAY: "<< pay;
	return 0;
}