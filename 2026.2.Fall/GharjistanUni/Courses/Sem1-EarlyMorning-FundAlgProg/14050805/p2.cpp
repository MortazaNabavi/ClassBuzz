#include <iostream>
using namespace std;
int main(){
	float x;
	cin >>x;
	
	if (x>0)
		cout<<"+";
	else if (x<0)
		cout<<"-";
	else
		cout<<"0";
		
	return 0;
}