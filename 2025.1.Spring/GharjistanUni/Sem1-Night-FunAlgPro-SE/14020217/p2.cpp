#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	double h,w,bmi;
	
	cout<<"H: ";
	cin>>h;
	cout<<"W: ";
	cin>>w;
	
//	bmi=w/(h*h);
	bmi=w/pow(h,2);
	cout<<"BMI= "<<bmi;
		
	return 0;
}