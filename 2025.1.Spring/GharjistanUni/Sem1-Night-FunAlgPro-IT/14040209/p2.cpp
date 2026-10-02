#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4;
	cout<<"Enter 1st Number: ";
	cin>>num1;
	
	cout<<"Enter 2nd Number: ";
	cin>>num2;
	
	cout<<"Enter 3rd Number: ";
	cin>>num3;
	
	cout<<"Enter 4th Number: ";
	cin>>num4;
	
	int result=num1*num1+num2*num2+num3*num3+num4*num4;
	cout<<"Result= "<<result;
	
	return 0;
}