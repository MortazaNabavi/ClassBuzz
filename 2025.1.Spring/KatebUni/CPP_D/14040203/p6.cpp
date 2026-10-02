#include <iostream>
using namespace std;
int main()
{
	double r, sq, cr, answer;
	
	cout<<"Enter R: ";
	cin>>r;
	
	sq=(2*r)*(2*r);
	cr=3.14*r*r;
	answer=sq-cr;
	
	cout<<"Answer: "<<answer;
	
	return 0;
}