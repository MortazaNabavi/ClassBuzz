#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"Enter N: ";
	cin>>N;
	
	int number;
	cout<<"Enter "<<N<<" Numbers: ";
	cin>>number;
	int Max=number;
	int Min=number;
	int Sum=number;
	int counter=1;
	
	while (counter<N){
		cin>>number;
		Sum=Sum+number;
		
		if (number>Max)
			Max=number;
		if (number<Min)
			Min=number;
		counter++;
	}
	
	int av=Sum/N;
	cout<<"Sum "<<Sum<<endl;
	cout<<"AV "<<av<<endl;
	cout<<"Max "<<Max<<endl;
	cout<<"Min "<<Min<<endl;
	return 0;
}