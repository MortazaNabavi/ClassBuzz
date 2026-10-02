#include <iostream>
using namespace std;
int main()
{
	int m;
	int n;
	int p;
	int q;
	
	cout<<"Enter 1st Num.: ";
	cin>>m;
	
	cout<<"Enter 2nd Num.: ";
	cin>>n;
	
	cout<<"Enter 3rd Num.: ";
	cin>>p;
	
	cout<<"Enter 4th Num.: ";
	cin>>q;
	
	int sum;
	sum=m+n+p+q;
	
	int av;
	av=sum/4;
	
	cout<<"Average is: ";
	cout<<av;
	
	
	
	return 0;
}