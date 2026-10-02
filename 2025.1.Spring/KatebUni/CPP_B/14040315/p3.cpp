#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a Number:\t";
	cin>>a;
			
	int counter=2;
	bool isPrime=1;
	
	while (counter<=a/2){
		if (a%counter==0){
			isPrime=false;
			break;
		}		
		counter++;
	}
	
	if (isPrime)
		cout<<a<<" is PRIME";
	else
		cout<<a<<" is NOT PRIME";
	
	return 0;
}