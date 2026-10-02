#include <iostream>
using namespace std;
int main(){
	
	double w,h,bmi;
	
	cout<<"W: ";
	cin>>w;
	cout<<"H: ";
	cin>>h;
	
	bmi= w/(h*h);
	
	cout<<"BMI is "<<bmi;
	
	return 0;
}