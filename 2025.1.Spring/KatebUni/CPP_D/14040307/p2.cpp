#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	
	printNumA:
		cout<<a<<"\t";
	a=a+1;
	
	if(a<=b)
		goto printNumA;
	
	return 0;
}