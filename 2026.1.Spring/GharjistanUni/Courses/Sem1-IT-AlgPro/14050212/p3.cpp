#include <iostream>
using namespace std;
int main(){
	float d, t, s;
	cout<<"Enter Traveled Distance (km): ";
	cin>>d;
	cout<<"Enter Spent Time (h): ";
	cin>>t;
	s=d/t;
	cout<<"Speed: "<<s<<" kmph";
}