#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	int i=a;
	int sigma=0;
	
	while (i<=b){
		sigma=sigma+i;
		i=i+1;
	}

	cout<<sigma;
	return 0;
}