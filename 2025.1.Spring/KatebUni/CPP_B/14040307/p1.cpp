#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter N: ";
	cin>>n;
	int counter=1, sum=0;
	Back:
	if (counter<=n){
		int number;
		cout<<"Enter #"<<counter<<":\t";
		cin>>number;
		sum+=number;
		counter++;
		goto Back;
	}else{
		cout<<"SUM:\t"<<sum;
	}
	return 0;
}