#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a Number: ";
	int n;
	cin>>n;
	int counter=0;
	int i=1;
	loop:
		if (i<=n){
			if(n%i==0)
				counter++;
			i++;
			goto loop;
		}
	cout<<n<<" has "<<counter<<" divisors.";
	return 0;
}