#include <iostream>
using namespace std;
int main(){
	
	float a,b;
	cin>>a >>b;
	
	if (a>b)
		cout<<a+b;
	else if (a<b)
		cout<<a*b;
	else
		cout<<a-b;
	
}