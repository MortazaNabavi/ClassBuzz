#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	
	// Swapping A & B
	if (a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	back:
	if (a<=b){
		cout<<a<<"\t";
		a++;
		goto back;
	}
	return 0;
}