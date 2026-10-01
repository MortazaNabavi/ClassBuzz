#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	int sigma=0;
	
	loop:
		if (i<=n){
			sigma+=i;
			i++;
			goto loop;
		}
	
	cout<<sigma;
}