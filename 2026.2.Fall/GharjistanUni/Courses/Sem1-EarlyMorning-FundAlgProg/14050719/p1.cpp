#include <iostream>
using namespace std;
int main(){
	float r;
	cout << "Enter R: ";
	cin >>r;
	float x= r*2;
	float sq= x*x;
	float pi=3.14;
	float cr= pi*r*r;
	float result= sq-cr;
	cout<< "RESULT: " <<result;
}