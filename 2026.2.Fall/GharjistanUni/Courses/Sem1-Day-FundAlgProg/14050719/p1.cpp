#include <iostream>
using namespace std;
int main(){
	float r, x, cr, sq, pi, result;
	cout <<"Enter R: ";
	cin >>r;
	x= r*2;
	sq= x*x;
	pi= 3.14;
	cr= r*r*pi;
	result= sq-cr;
	cout<< result;
	return 0;
}