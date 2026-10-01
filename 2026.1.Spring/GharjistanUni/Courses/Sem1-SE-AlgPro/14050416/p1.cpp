#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int counter=0;
	
	loop:
		if (i<=n){
			if(n%i==0)
				counter++;
			
			i=i+1;
			goto loop;
		}
	
	if (counter==2)
		cout<<n<<" is Prime.";
	else
		cout<<n<<" is NOT Prime";
	return 0;
}