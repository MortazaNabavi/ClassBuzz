#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a, b, c;
	cin>> a>> b>> c;
	
	float delta= pow(b,2) - (4*a*c);
	
	if (delta<0)
		cout<<"No Root!";
	else if (delta==0)
	{
		float x= (-1*b)/(2*a);
		cout <<"Root: "<<x;
	}
	else{
		float x1= ((-1*b)+sqrt(delta))/(2*a);
		float x2= ((-1*b)-sqrt(delta))/(2*a);
		cout <<"Root 1:\t"<<x1<<endl;
		cout <<"Root 2:\t"<<x2;
	}
	return 0;
}