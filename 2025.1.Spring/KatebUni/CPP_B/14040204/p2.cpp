#include <iostream>
using namespace std;
int main()
{
	//Nomarat 3 dars:
	int g1, g2, g3;
	
	// 3 Cridets
	int c1, c2,c3;
	
	cout<<"g, c: CPP: ";
	cin>>g1>>c1;
	
	cout<<"g, c: Computer: ";
	cin>>g2>>c2;
	
	cout<<"g, c: Saghafat: ";
	cin>>g3>>c3;
	
	int a;
	a=g1*c1+g2*c2+g3*c3;
	
	int b;
	b=c1+c2+c3;
	
	double av;
	av=a/b;
	
	cout<<"Av: ";
	cout<<av;
	
	return 0;
}