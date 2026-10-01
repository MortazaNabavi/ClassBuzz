#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool isPrime=true;
	int i;
	for (i=2; i<=n/2; i++){
		if (n%i==0){
			isPrime=false;
			break;
		}
	}
	cout<<i;
	if (isPrime)
		cout<<"Prime";
	else
		cout<<"not Prime";
	
	return 0;
}