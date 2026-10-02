#include <iostream>
using namespace std;
int main(){
	int x, counter=1, f=1;
	cout<<"Enter X:\t";
	cin>>x;
	
	while(counter<=x){
		f*=counter;
		counter++;
	}
	cout<<x<<"! = "<<f;
}