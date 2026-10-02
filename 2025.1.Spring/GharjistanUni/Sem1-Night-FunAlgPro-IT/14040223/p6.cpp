#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	double w, h, bmi;
	
	cout<<"W: ";
	cin>>w;
	cout<<"H: ";
	cin>>h;
	
	h=h/100;
	
	bmi=w/pow(h,2);
	cout<<"BMI is "<<bmi;
	
	
	if(bmi<20)
	{
		cout<<"Kambood Wazn";
	}
	else if (bmi<25)
	{
		cout<<"Wazn Monaseb";
	}
	else if (bmi<30)
	{
		cout<<"Ezafa Wazn";
	}
	else if (bmi<35)
	{
		cout<<"Chaqi 1";
	}
	else
	{
		cout<<"Chaqi 2";
	}
	
	
	return 0;
}