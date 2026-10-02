#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int x1, y1;
	int x2, y2;
	
	cout<<"Enter (x,y) 1st Point: ";
	cin>>x1>>y1;
	
	cout<<"Enter (x,y) 2nd Point: ";
	cin>>x2>>y2;
	
	double d;
	d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	cout<<"Distance: "<<d;
		
	return 0;
}