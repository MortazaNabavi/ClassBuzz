#include <iostream>
using namespace std;
int main(){
	
	float r;
	cin>>r;
	
	float Pi=3.14;
	float Cr= Pi*r*r;
	float x= r*2;
	float Sq= x*x;
	float Red= Sq-Cr;
	
	cout<< Red;
}