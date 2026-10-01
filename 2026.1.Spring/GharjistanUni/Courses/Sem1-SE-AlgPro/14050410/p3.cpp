#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	loop:
		if (i<=n){
			if(n%i==0)
				cout<<i<<"\t";
			i++;
			goto loop;
		}
}