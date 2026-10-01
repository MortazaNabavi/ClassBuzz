
#include <math.h>
using namespace std;
int main(){
	float a, b, c, delta;
	cin >>a >>b >>c;
	delta= pow(b,2)-(4*a*c);
	
	if (delta<0)
		cout<<"No Roots!";
	else if (delta==0){
		float x=(-1*b)/(2*a);
		cout<<x;
	}
	else{
		float x1=(-1*b+sqrt(delta))/(2*a);
		float x2=(-1*b-sqrt(delta))/(2*a);
		cout<<x1<<endl<<x2;
	}
	
}