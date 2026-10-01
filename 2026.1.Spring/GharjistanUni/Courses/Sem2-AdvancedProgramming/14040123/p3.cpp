#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a, b, c;
	cin>>a>>b>>c;
	
	int delta= pow(b,2)-(4*a*c);
	
	if (delta<0)
		cout<<"NO ROOT!";
	else if (delta==0)
	{
		float x=pow(b,2)/(2*a);
		cout<<x;
	}
	else {
		float x1=(pow(b,2)+sqrt(delta))/(2*a);
		float x2=(pow(b,2)-sqrt(delta))/(2*a);
		cout<<x1<<"\n"<<x2;
	}
	
	
	
}