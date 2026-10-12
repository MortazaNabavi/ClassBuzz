#include <iostream>
using  namespace std;
int main(){
	float d, t, v;
	cout <<"Enter Distance (km) and Time (h): ";
	cin >>d >>t;
	v=d/t;
	cout <<"Speed is " <<v <<"km/h";
	return 0;
}