#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Size of Array: ";
	cin>>size;
	float x [size];
	
	for (int i=0; i<size; i++){
		cin>> x[i];
	}
	
	for (int i=size-1; i>=0; i--){
		cout<< x[i]<<"\t";
	}
		
	return 0;
}