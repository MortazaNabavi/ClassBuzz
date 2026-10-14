#include <iostream>
using namespace std;
int main()
{
	float usage;
	cin >>usage;
	float fee= 3;
	float box= 200;
	float stationary=20;
	float pay= usage*fee +box+stationary;
	cout <<pay;
	return 0;
}