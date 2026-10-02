#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	bool b=a>=50;
	bool c= a<=100;
	bool d= b and c;
	if (d)
		cout<<"YES";
	
	return 0;
}