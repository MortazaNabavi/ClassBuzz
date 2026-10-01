#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int f=1;
	int i=1;
	
	while (i<=n){
		f*=i;
		i++;
	}
	
	cout<<f;
	return 0; 
}