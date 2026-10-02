#include <iostream>
using namespace std;
int main()
{
	
	double g1, g2, g3;
	double c1, c2, c3;
	double a, b, c;
	
	cout<<"G1, C1: ";
	cin>>g1>>c1;
	
	cout<<"G2, c2: ";
	cin>>g2>> c2;
	
	cout<<"G3, C3: ";
	cin>>g3>>c3;
	
	a=(g1*c1)+(g2*c2)+(g3*c3);
	b=c1+c2+c3;
	c=a/b;
	
	cout<<"Av: "<<c;
	
	
	return 0;
}