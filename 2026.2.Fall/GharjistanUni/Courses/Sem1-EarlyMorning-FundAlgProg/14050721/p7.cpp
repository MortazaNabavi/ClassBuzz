#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float weight, height, bmi;
	cout <<"Enter Weight (kg): ";
	cin >>weight;
	
	cout <<"Enter Height (m): ";
	cin >>height;
	
	bmi=weight/pow(height, 2);
	cout <<"BMI: " <<bmi;
	return 0;
}