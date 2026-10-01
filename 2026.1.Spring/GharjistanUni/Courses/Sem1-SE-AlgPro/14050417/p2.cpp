#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	
	if (a>b){
		int c=a;
		a=b;
		b=c;
	}
	
	while (a<=b){
		cout<<a<<"\t";
		a++;
	}
		
	return 0;
}