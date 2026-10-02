#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	
	cin>>a;
	cin>>b;
	
	int c;
	c=a;
	a=b;
	b=c;
	
	cout<<a<<endl;
	cout<<b;
	
	return 0;
}