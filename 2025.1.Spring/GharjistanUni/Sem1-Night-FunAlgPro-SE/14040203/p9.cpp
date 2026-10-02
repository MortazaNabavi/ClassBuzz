#include <iostream>
using namespace std;
int main()
{
	double r;
	cout<<"Enter R: ";
	cin>>r;
	
	
	double p;
	p=3.14;
	
	double x;
	x=2*r;
	
	double sq;
	sq=x*x;
	
	double cr;
	cr=p*r*r;
	
	double answer;
	answer=sq-cr;
	cout<<answer;
	
	return 0;
}