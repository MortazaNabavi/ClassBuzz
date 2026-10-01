#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	int sigma=0;
	
	while (i<=n){
		sigma+=i;
		i++;
	}
	cout<<sigma;
	return 0; 
}