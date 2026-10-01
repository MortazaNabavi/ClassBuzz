#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Size of Array: ";
	cin>>size;
	int x [size];
	
	for (int i=0; i<size; i++)
		cin>> x[i];
			
	for (int i=0; i<size; i++)
		if (x[i]%2==0)
			cout<< x[i]<<"\t";

	return 0;
}