#include <iostream>
using namespace std;
int main(){
	float x;
	cin >>x;
	
	if (x==0)
		cout<<"0";
	else if (x<0)
		cout<<"-";
	else
		cout<<"+";
		
	return 0;
}