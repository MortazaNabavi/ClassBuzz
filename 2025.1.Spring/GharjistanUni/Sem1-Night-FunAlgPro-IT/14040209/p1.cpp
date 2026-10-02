#include <iostream>
using namespace std;
int main()
{
	int g1, g2, g3;
	int c1, c2, c3;
	int sum, c, av;
	
	cout<<"G, C Saghafat: ";
	cin>>g1;
	cin>>c1;
	
	cout<<"G, C C++: ";
	cin>>g2;
	cin>>c2;
	
	cout<<"G, C English: ";
	cin>>g3>>c3;
	
	sum=(g1*c1)+(g2*c2)+(g3*c3);
	c=c1+c2+c3;
	av=sum/c;
	
	cout<<"av: ";
	cout<<av;
	
	
	return 0;
}