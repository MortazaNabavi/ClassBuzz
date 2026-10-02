#include <iostream>
using namespace std;
int main(){
	
	double x, y;
	cout<<"Enter 1st Num: ";
	cin>>x;
	cout<<"Enter 2nd Num: ";
	cin>>y;
	
	if (x==y)
		cout<<x<<"="<<y;
	else if (x>y)
		cout<<x<<">"<<y;
	else
		cout<<y<<">"<<x;
}