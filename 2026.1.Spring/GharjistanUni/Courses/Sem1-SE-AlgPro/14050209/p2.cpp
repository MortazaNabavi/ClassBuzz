#include <iostream>
using namespace std;
int main(){
	float d, t;
	cout<<"Enter Distance(km): ";
	cin>>d;
	cout<<"Enter Time(h): ";
	cin>>t;
	float s;
	s=d/t;
	cout<<"Speed: "<<s<<"km/h";
}