#include <iostream>
using namespace std;
int main(){
	float x;
	cin >>x;
	
	if (x>0)
		cout <<"+";
		
	if (x<0)
		cout<<"-";
		
	if (x==0)
		cout<<"zero";
	
	return 0;
}