#include <iostream>
using namespace std;
int main(){
	int arraySize;
	cin >>arraySize;
	
	int myArray [arraySize];
	
	for (int i=0; i<arraySize; i++)
		cin >>myArray[i];
	
	cout<<"The Array: \n\t";
	for (int i=0; i<arraySize; i++)
		cout<< myArray[i]<< " * ";
	
	bool sorted=true;
	
	for (int i=1; i<arraySize; i++)
		if (myArray[i]<myArray[i-1]){
			sorted=false;
			break;
		}
	
	if (sorted)
		cout<<"the array is sorted!";
	else
		cout<<"the array is NOT sorted!";
	
	return 0;
}