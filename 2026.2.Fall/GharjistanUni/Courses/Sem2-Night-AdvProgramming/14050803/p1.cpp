#include <iostream>
using namespace std;
int main(){
	int arraySize;
	cin >>arraySize;
	
	int myArray [arraySize];
	
	for (int i=0; i<arraySize; i++)
		cin >>myArray[i];
	
	cout<<"Befor Change: \n\t";
	for (int i=0; i<arraySize; i++)
		cout<< myArray[i]<< " * ";
	
	for (int i=0; i<arraySize/2; i++){
		int temp= myArray[i];
		myArray[i]= myArray[arraySize-i-1];
		myArray[arraySize-i-1]= temp;
	}
	
	cout<<"\n\nAfter Change: \n\t";
	for (int i=0; i<arraySize; i++)
		cout<< myArray[i]<< " * ";
	
	return 0;
}