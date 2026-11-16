#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x1, y1, x2, y2, d;
	cout <<"Enter (x,y) for 1st Point:\n";
	cin >>x1 >>y1;
	cout <<"Enter (x,y) for 2nd Point:\n";
	cin >>x2 >>y2;
	
	float difX= x1-x2;
	float difY= y1-y2;
	
	float sqX=difX*difX;
	float sqY= pow(difY, 2);
	
	float a=sqX+sqY;
	d=sqrt(a);
	
	cout <<"Distance:\t"<<d;
	return 0;
}