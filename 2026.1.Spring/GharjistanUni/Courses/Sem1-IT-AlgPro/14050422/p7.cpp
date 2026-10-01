#include <iostream>
using namespace  std;
int main(){
	int n;
	cin>> n;
	int counter=0;
	
	for (int i=2; i<=n/2; i++){
		if (n%i==0)
			counter++;
	}
	
	if (counter==0)
		cout<<"Prime";
	else
		cout<<"Not Prime";
	
	return 0;
}