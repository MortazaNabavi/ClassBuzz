#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter N:\t";
	cin>>n;
	int counter=0;
	double sum=0;
	Amoonja:
	if (counter<n){
		double a;
		cout<<"Enter #"<<counter+1<<":\t";
		cin>>a;
		sum+=a;
		counter++;
		goto Amoonja;
	}else{
		cout<<"SUM:\t"<<sum;
	}
	return 0;
}