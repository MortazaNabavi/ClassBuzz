#include <iostream>
using namespace std;
int main(){
	float a, b, i;
	a=2048;
	b=2;
	i=a;
	for (i=a; i>=b; i/=2)
	{
		if (i!=128)
			cout<<i<<"\t";	
	}

}