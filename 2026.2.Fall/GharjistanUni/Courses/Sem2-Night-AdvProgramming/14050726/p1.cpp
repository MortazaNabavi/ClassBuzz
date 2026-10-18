#include <iostream>
using namespace std;
int main(){
	int size;
	cin >>size;
	
	int arr1[size];
	for (int i=0; i<size; i++)
		cin >> arr1[i];
	
	int arr2[size];
	for (int i=0; i< size; i++)
		arr2[i]= arr1[size-i-1];
		
	for (int i=0; i<size; i++)
		cout <<arr2[i]<<"\t";
	
	return 0;
}