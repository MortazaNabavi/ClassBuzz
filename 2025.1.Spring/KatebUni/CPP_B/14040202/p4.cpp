#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	double Delta;
	Delta=(b*b)-(4*a*c);
	
	if(Delta<0)
	{
		cout<<"No Answer!";
	}else
	{
		if(Delta==0)
		{
			double x;
			x=(-1*b)/(2*a);
			cout<<x;
		}
		else
		{
			double x1,x2;
			x1=(-1*b+sqrt(Delta))/(2*a);	
			x2=(-1*b-sqrt(Delta))/(2*a);
			
			cout<<x1;
			cout<<x2;
		}
		
	}
	
	return 0;
}