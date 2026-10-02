#include <iostream>
using namespace std;
int main(){
	int n, counter, sum;
	cin>>n;
	sum=0;
	counter=0;
	
	while (counter<n){
		int number;
		cout<<"Enter #"<<counter+1<<" Number:\t";
		cin>>number;
		sum+=number;
		counter++;
	}
	cout<<"SUM:\t"<<sum<<"\nAV:\t"<<sum/n;
	
	return 0;
}