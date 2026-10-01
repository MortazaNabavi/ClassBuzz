#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int factorial=1;
	
	while (i<=n){
		factorial=factorial*i;
		i++;
	}
	
	cout<<factorial;
	return 0;
}