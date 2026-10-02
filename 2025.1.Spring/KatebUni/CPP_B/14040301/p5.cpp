#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	double a,b,c;
	cin>>a>>b>>c;
	double delta=pow(b,2)-(4*a*c);

	if (delta<0)
		cout<<"No Answer!";
	else if (delta==0)
	{
		double x=(-1*b+sqrt(delta))/(2*a);
		cout<<"X= "<<x;
	}else{
		double x1=(-1*b+sqrt(delta))/(2*a);
		cout<<"X1= "<<x1<<endl;
		double x2=(-1*b-sqrt(delta))/(2*a);
		cout<<"X2= "<<x2<<endl;
	}
	return 0;
}.