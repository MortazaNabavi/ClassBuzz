#include <iostream>
using  namespace std;
int main(){
	float d, t, v;
	cout <<"Enter Distance (km): ";
	cin >>d;
	cout <<"Enter Time (h): ";
	cin >>t;
	v=d/t;
	cout <<"Speed is " <<v <<"km/h";
	return 0;
}