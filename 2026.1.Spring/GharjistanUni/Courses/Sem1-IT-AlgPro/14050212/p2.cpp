#include <iostream>
using namespace std;
int main(){
	float distance, time, speed;
	cout<<"Enter Traveled Distance (km): ";
	cin>>distance;
	cout<<"Enter Spent Time (h): ";
	cin>>time;
	speed=distance/time;
	cout<<"Speed: "<<speed<<" kmph";
}