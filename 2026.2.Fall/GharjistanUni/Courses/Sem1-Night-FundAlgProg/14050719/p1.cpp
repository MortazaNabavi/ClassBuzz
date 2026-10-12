#include <iostream>
using namespace std;
int main(){
	float r, x, sq, pi, cr , result;
	cout << "Enter R: ";
	cin >>r;
	x= 2*r;
	sq= x*x;
	pi= 3.14;
	cr = pi*r*r;
	result= sq-cr;
	cout<<"RESULT is "<<result;
	return 0;
}