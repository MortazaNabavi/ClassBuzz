#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int f=1;
	int i=1;
	
	loop:
		if (i<=n){
			f*=i;
			i++;
			goto loop;
		}
	
	cout<<f;
	return 0; 
}