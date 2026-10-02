#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	int number;
	cin>>number;
	int Max= number;
	int Min= number;
	int Sum= number;
	int counter=1;
	
	while (counter<n){
		cin>>number;
		Sum=Sum+number;
		
		if (number>Max)
			Max=number;
			
		if (number<Min)
			Min=number;
		counter++;	
	}
	
	cout<<"Sum\t"<<Sum;
	cout<<"\nMin\t"<<Min;
	cout<<"\nMax\t"<<Max;
	
	return 0;
}