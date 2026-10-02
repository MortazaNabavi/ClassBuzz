#include <iostream>
using namespace std;
int main(){
	int a, b, counter, n;
	a=0;
	b=1;
	counter=2;
	n=100;
	
	cout<< a<<"\t"<<b<<"\t";
	
	shart:
	if (counter<=n){
		int c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
		counter++;
		goto shart;
	}
	return 0;
}