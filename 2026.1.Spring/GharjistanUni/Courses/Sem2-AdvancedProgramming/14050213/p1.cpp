#include <iostream>
using namespace std;
int main(){
	int n, counter, sum, average, number;
	cin>>n;
	counter=0;
	sum=0;
	SHART:
	if (counter<n){
		cin>>number;
		sum=sum+number;
		counter=counter+1;
		goto SHART;
	}
	average=sum/n;
	cout<<sum<<endl<<average;
}