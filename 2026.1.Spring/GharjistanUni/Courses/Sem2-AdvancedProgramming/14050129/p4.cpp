#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a >>b >>c;
	
	bool x=a+b>c;
	bool y=a+c>b;
	bool z=b+c>a;
	bool F= x and y and z;
	if (F)
		cout<<"TRIANGE";
	else
		cout<<"NOT TRIANGE";
}