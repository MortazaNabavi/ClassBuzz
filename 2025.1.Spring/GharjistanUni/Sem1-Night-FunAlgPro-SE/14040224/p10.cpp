#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double w,h,bmi;
	cout<<"Enter W: ";
	cin>>w;
	cout<<"Enter H: ";
	cin>>h;
	
	h=h/100;
	bmi=w/pow(h,2);
	
	cout<<"BMI is "<<bmi<<endl;
	
	if(bmi<20)
		cout<<"Kambood";
	else if (bmi<25)
		cout<<"Normal";
	else if (bmi<30)
		cout<<"Ezafa Wazn";
	else if (bmi<35)
		cout<<"Chaqi 1";
	else 
		cout<<"Chaghi 2";
}