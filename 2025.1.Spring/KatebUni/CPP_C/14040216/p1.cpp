#include <iostream>
using namespace std;
int main()
{
	double a,b;
	cout<<"Enter A: ";
	cin>>a;
	cout<<"Enter B: ";
	cin>>b;
	
	if(a>b)
	{
		//yes - True
		cout<<a<<">"<<b; 
	}
	else{
		//no
		cout<<b<<">"<<a;
	}

	return 0;
}