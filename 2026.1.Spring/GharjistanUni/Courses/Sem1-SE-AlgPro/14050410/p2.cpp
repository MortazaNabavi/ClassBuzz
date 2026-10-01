#include <iostream>
using namespace std;
int main(){
	cout<<"Enter N: ";
	int n;
	cin>>n;
	int factorial=1;
	LOOP:
		if (n>0){
			factorial*=n;
			n--;
			goto LOOP;	
		}
	cout<<factorial;
	return 0;
}