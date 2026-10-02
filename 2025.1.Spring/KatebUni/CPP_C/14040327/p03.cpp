#include <iostream>
using namespace std;
int main(){
	cout<<"Enter X:";
	int x;
	cin>>x;
	
	int counter=1;
	int factorial=1;
	
	cout<<x<<"! = ";
	while (counter<=x){
		factorial*=counter;
		cout<<counter;
		if(counter!=x)
			cout<<" * ";
		counter++;
	}
	cout<<" = "<<factorial;
	return 0;
}