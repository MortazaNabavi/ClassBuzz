#include <iostream>
using namespace std;
int main(){
	float f[10]={20, 30, -90, -90.90,
	100, 11, 0.001, 5, 78, 99};
	
	float max=f[0]; //max value
	int position=0;
	
	for (int i=1; i<=9; i++)
		if (f[i]>max){
			max=f[i];
			position=i;
		}
	
	cout<<position;
	return 0;
}