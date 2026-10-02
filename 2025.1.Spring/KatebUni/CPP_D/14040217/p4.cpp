#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int x1,y1, x2,y2;
	cout<<"(x,y) 1st Point: ";
	cin>>x1>>y1;
	cout<<"(x,y) 2nd Point: ";
	cin>>x2>>y2;
	double d=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
	cout<<"D= "<<d;
	
	return 0;
}
