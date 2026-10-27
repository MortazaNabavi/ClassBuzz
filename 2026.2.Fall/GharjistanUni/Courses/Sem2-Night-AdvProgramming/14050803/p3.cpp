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
	int x;
	cin>> x;
	int location=-1;

	for (int i=0; i <arraySize; i++)
		if (myArray[i]==x){
			location=i;
			break;
		}
	
	if (location != -1)
		cout<<x<<" was found in [" <<location<<"]";
	else
		cout <<x<<" was NOT found";
	
	return 0;
}