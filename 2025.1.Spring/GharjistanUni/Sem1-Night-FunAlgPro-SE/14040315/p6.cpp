#include <iostream>
using namespace std;
int main(){
	int a;
	int i=2;
	bool isPrime=true;
	cin>>a;
	Shart:
	if (i<=a/2){
		
		if (a%i==0){
		{
			isPrime=false;
			goto forward;
		}
	}
	i++;
	goto Shart;
	}
	
	forward:
	if(isPrime)
		cout<<a<<" is PRIME Number.";
	else
		cout<<a<<" is NOT PRIME Number.";
	
	return 0;
}