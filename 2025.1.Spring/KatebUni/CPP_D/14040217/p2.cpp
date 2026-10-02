#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double h,w,b;
	cout<<"Enter H: ";
	cin>>h;
	cout<<"Enter W: ";
	cin>>w;
	b=w/pow(h,2);
	cout<<"BMI: "<<b;
	return 0;
}