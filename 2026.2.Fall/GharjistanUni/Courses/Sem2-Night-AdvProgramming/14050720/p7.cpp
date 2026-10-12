#include <iostream>
using namespace std;
int main(){
	cout <<"Enter Array Size:\t";
	int arraySize;
	cin >>arraySize;
	
	int myArray [arraySize];
	int sum=0;
	
	for (int i=0; i<arraySize; i++){
		cout <<"#"<<i+1<<" Enter your Number:\t";
		cin >>myArray[i];
		sum += myArray[i];
	}
	
	int average=sum/arraySize;
	cout<<"SUM: "<<sum<<"\tAverage: "<<average;
	return 0;
}