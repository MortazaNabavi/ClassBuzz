#include <iostream>
using namespace std;
int main(){
	float Weight, Height;
	cout<<"Enter Your Weight (kg): ";
	cin>>Weight;
	cout<<"Enter Your Height (m): ";
	cin>>Height;
	
	float BMI=Weight/(Height*Height);
	cout<<"BMI IS: "<<BMI;
}