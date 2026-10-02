#include <iostream>
using namespace std;
int main(){
	int a,b=1;
	a=b;
	while(a<=10){
		b=1;
		while(b<=10){
			cout<<a*b<<"\t";
			b++;
		}
		cout<<"\n";
		a++;
	}
}