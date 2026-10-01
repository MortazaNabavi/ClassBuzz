#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	if (t<0)
		cout<<"Error!";
	else if (t<=5)
		cout<<"Shab";
	else if (t<=19)
		cout<<"Rooz";
	else if (t<=24)
		cout<<"Shab";
	else
		cout<<"Error";
	
}