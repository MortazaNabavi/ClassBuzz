#include <iostream>
using namespace  std;
int main(){
	int n;
	cin>> n;
	int i=1;
	int counter=0;
	
	while (i<=n){
		if (n%i==0)
			counter++;
		i++;
	}
	
	if (counter==2)
		cout<<"Prime";
	else
		cout<<"Not Prime";
	
	return 0;
}