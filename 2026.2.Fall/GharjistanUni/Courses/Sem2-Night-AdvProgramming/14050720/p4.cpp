#include <iostream>
using namespace std;
int main(){
	float numbers [6];
	
	for (int i=0; i<6; i++)
		cin>> numbers[i];
	
	for (int i=5; i>=0; i--)
		cout <<numbers[i]<<"\t";
	
	return 0;
}