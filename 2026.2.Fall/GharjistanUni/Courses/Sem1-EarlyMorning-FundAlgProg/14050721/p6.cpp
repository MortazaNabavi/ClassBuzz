#include <iostream>
using namespace std;
int main(){
	float weight, height, bmi;
	cout <<"Enter Weight (kg): ";
	cin >>weight;
	
	cout <<"Enter Height (m): ";
	cin >>height;
	
	bmi=weight/(height*height);
	cout <<"BMI: " <<bmi;
	return 0;
}