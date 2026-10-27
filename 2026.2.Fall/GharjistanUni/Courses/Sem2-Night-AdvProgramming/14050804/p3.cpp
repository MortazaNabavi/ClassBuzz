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
	cout<<"\n\n";
	// the answer:

	bool isSymmetric=true;
	for (int i=0; i <arraySize/2; i++)
		if (myArray[i] != myArray[arraySize-i-1]){
			isSymmetric=false;
			break;
		}
	
	if (isSymmetric)
		cout<<"the array is symmetric!";
	else
		cout<<"the array is NOT symmetric!";
	return 0;
}