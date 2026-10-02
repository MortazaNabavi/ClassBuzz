#include <iostream>
using namespace std;
int main(){
	
	double x,y;
	cout<<"Enter X: ";
	cin>>x;
	cout<<"Enter Y: ";
	cin>>y;
	
	if(x>y)
	{
		// True- Yes- 1
		cout<<x<<">"<<y;
	}
	else
	{
		// False- No- 0
		cout<<y<<">"<<x;
	}
	
	return 0;
}