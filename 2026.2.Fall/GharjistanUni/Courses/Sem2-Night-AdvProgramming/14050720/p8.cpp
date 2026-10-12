#include <iostream>
using namespace std;
int main(){
	cout <<"Enter Array Size:\t";
	int arraySize;
	cin >>arraySize;
	
	int myArray [arraySize];
	int sum=0;
	float average=0;
	
	for (int i=0; i<arraySize; i++){
		cout <<"#"<<i+1<<" Enter your Number:\t";
		cin >>myArray[i];
		sum += myArray[i];
		average+= myArray[i]/arraySize;
	}

	cout<<"SUM: "<<sum<<"\tAverage: "<<average;
	return 0;
}