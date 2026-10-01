#include <iostream>
using namespace std;
int main(){
	float n, counter, sum, average, number;
	cout<<"How many number do U have? ";
	cin>>n;
	sum=0;
	for (counter=0; counter<n; counter++){
		cout<<"Enter Number #"<<counter+1<<": ";
		cin>>number;
		sum=sum+number;
	}
	average=sum/n;
	cout<<"SUM: "<<sum<<"\t";
	cout<<"Average: "<<average;
}