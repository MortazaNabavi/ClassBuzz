#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int x1,y1;
	int x2,y2;
	
	cout<<"(x,y) 1st Point: ";
	cin>>x1>>y1;
	
	cout<<"(x,y) 2nd Point: ";
	cin>>x2>>y2;
	
	int difY=y2-y1;
	int difX=x2-x1;
	int y=difY*difY;
	int x=pow(difX, 2);
	
	double d;
	d=sqrt(x+y);
	
	cout<<"D= "<<d;
	
	return 0;
}
