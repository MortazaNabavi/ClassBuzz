#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x1, y1, x2, y2, d;
	cout <<"Enter (x,y) for 1st Point:\n";
	cin >>x1 >>y1;
	cout <<"Enter (x,y) for 2nd Point:\n";
	cin >>x2 >>y2;
	
	d=sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
	cout <<"Distance:\t"<<d;
	return 0;
}