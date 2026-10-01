#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int factorial=1;
	loop:
		if (i<=n){
			factorial=factorial*i;
			i++;
			goto loop;
		}
	cout<<factorial;
	return 0;
}