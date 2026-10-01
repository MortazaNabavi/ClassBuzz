#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int counter=0;
	int i=1;
	
	while (i<=n){
		if (n%i==0)
			counter++;
		i++;
	}
	
	if (counter==2)
		cout<<n<<" is Prime";
	else
		cout<<n<<" is not Prime";
	
	return 0;
}