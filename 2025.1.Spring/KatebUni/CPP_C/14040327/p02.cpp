#include <iostream>
using namespace std;
int main(){
	cout<<"Enter X:";
	int x;
	cin>>x;
	
	int counter=1;
	int factorial=1;
	
	while (counter<=x){
		factorial*=counter;
		counter++;
	}
	cout<<x<<"! = "<<factorial;
	return 0;
}