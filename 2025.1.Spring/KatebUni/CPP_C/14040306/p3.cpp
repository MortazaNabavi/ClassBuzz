#include <iostream>
using namespace std;
int main(){
	
	int x,y;
	cin>>x>>y;
	cout<<"____________\n";
	myLabel:
	cout<<x<<endl;
	x++; // x=x+1;
	
	if (x<=y)
		goto myLabel;
	
	return 0;
}