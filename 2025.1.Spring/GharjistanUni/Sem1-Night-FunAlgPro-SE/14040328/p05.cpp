#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b>c and a+c>b && b+c>a)
		cout<<"Triangle";
	else
		cout<<"NOT Triangle";
	return 0;
}