#include <iostream>
using namespace std;
int main(){
	float f[10]={20, 30, -90, -90.90,
	100, 11, 0.001, 5, 78, 99};
	
	float min=f[0];
	
	for (int i=1; i<=9; i++)
		if (f[i]<min)
			min=f[i];
	
	cout<<"Min is "<<min;	
	return 0;
}