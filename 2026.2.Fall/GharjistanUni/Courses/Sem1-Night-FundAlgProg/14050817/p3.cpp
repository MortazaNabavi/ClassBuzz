#include <iostream>
using namespace std;
int main(){
	int h;
	cin>>h;
	
	if ( (h>=0 and h<=5) or (h>19 and h<=24) )
		cout<<"Shab";
	else if (h>5 and h<=19)
		cout<<"Rooz";
	else
		cout<<"Error";

	return 0;
}