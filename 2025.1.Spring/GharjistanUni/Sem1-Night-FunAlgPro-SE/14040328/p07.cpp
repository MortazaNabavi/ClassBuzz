#include <iostream>
using namespace std;
int main(){
	int a, i=0;
	cin>>a;
	while(a>0){
		a/=10;
		i++;
	}
	cout<<i;
}