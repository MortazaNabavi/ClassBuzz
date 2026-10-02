#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x1, y1;
	int x2, y2;
	
	cout<<"(x, y) 1st Point: ";
	cin>>x1>>y1;
	
	cout<<"(x, y) 2nd Point: ";
	cin>>x2>>y2;
	
	int difX=x1-x2;
	int difY=y1-y2;
	
	int X=difX*difX;
	int Y=pow(difY,2);
	
	double d=sqrt(X+Y);
	
	cout<<"D= ";
	cout<<d;
	return 0;
}