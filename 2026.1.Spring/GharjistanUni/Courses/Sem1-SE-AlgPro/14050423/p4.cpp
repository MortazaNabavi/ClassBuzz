#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int sigma=0;
	
	for (int i=1; i<=n; i++){
		sigma+=i;
	}
	
	cout<<sigma;
	return 0; 
}