#include <iostream>
using namespace std;
int main(){
	int a, b, n;
	a=0;
	b=1;
	n=100;
	cout<< a<<"\t"<<b<<"\t";

	for (int counter=2 ;counter<n; counter++){
		int c= a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
	return 0;
}