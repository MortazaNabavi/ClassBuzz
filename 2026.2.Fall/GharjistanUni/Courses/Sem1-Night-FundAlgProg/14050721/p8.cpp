#include <iostream>
using namespace std;
int main(){
	float c1, c2, c3, g1, g2, g3;
	cout<<"Enter G & C C++: ";
	cin>> g1>> c1;
	cout<<"Enter G & C Islamic Study: ";
	cin>> g2>> c2;
	cout<<"Enter G & C Math: ";
	cin>> g3>> c3;
	
	float tg= g1*c1 + g2*c2 + g3*c3;
	float tc= c1+c2+c3;
	float average= tg/tc;
	cout<< average;
	return 0;
}