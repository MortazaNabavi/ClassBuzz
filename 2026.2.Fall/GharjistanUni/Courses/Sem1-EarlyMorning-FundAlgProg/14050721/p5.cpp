#include <iostream>
using namespace std;
int main(){
	float weight, height, bmi;
	cin >>weight >>height;
	bmi=weight/(height*height);
	cout <<bmi;
	return 0;
}