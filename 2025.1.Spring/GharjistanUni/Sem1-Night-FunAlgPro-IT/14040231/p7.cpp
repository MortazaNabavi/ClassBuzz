#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double delta=pow(b,2)-(4*a*c);
	if (delta>0){
		double x1=((-1*b)+sqrt(delta))/(2*a);
		double x2=((-1*b)-sqrt(delta))/(2*a);
		cout<<"x1= "<<x1<<endl<<"x2="<<x2;		
	}
	else if (delta==0){
		double x=((-1*b)+sqrt(delta))/(2*a);
		cout<<"x= "<<x;
	}
	else
		cout<<"No Answer! ";	
		
	return 0;
}