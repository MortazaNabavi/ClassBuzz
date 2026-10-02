#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	
	myLabel:
	cout<<a<<"\t";
	a++;  // a=a+1;     //  a+=1;
	
	if (a<=b)
		goto myLabel;
		
	return 0;
}