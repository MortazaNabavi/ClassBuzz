#include <iostream>
using namespace std;
int main(){
	
	double x,y;
	cout<<"Enter X: ";
	cin>>x;
	cout<<"Enter Y: ";
	cin>>y;

	if(x>y){
		cout<<x<<">"<<y;
	}
	else if (x==y){
			cout<<x<<"="<<y;
	}
	else
	{
			cout<<y<<">"<<x;	
	}

	return 0;	
}