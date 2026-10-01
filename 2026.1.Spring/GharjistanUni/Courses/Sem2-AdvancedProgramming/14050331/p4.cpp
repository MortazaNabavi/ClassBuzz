#include <iostream>
using namespace std;
int main(){
	float f[10]={20, 30, -90, -90.90,
	100, 11, 0.001, 5, 78, 99};
	
	float sum=0;
	
	for (int i=0; i<=9; i++)
		sum+=f[i];	//sum=sum+f[i];
		
	cout<<"Total: "<<sum<<endl;
	cout<<"Average: "<<sum/10;
	
	return 0;
}