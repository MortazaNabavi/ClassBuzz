#include <iostream>
using namespace std;
int main(){
	float height, weight;
	cout<<"Enter Your Height (m): ";
	cin>>height;
	cout<<"Enter Your Weight (kg): ";
	cin>>weight;
	float BMI=weight/(height*height);
	cout<<BMI;
}