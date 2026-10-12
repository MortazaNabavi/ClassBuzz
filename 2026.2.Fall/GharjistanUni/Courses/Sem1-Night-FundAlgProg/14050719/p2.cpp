#include <iostream>
using namespace std;
int main(){
	float w, h, bmi;
	cout<<"Enter ur Weight: ";
	cin>> w;
	cout<<"Enter ur Height: ";
	cin>> h;
	bmi=w/(h*h);
	cout<< "BMI= "<<bmi;
	return 0;
}