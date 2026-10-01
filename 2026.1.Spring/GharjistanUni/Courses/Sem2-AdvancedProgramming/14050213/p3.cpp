#include <iostream>
using namespace std;
int main(){
	float n, counter, sum, average, number;
	cout<<"How many number do U have? ";
	cin>>n;
	counter=0;
	sum=0;
	while (counter<n){
		cout<<"Enter Number #"<<counter+1<<": ";
		cin>>number;
		sum=sum+number;
		counter=counter+1;	
	}
	average=sum/n;
	cout<<"SUM: "<<sum<<"\t";
	cout<<"Average: "<<average;
}