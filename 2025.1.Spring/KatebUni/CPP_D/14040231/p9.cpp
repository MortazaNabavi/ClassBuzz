#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int delta=pow(b,2)-(4*a*c);
	if (delta==0){
		double x=(-1*b+sqrt(delta))/(2*a);
		cout<<"X= "<<x;
	}else if (delta >0)
	{
		double x1=(-1*b+sqrt(delta))/(2*a);
		cout<<"X1= "<<x1;
		double x2=(-1*b-sqrt(delta))/(2*a);
		cout<<"X2= "<<x2;
	}
	else{
		cout<<"No Answer";
	}
	
	return 0;
}