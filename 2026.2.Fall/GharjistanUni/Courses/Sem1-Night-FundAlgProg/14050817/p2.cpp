#include <iostream>
using namespace std;
int main(){
	int h;
	cin>>h;
	
	if (h>=0 and h<=5)
		cout<<"bia Shab haye mahtab ast ...";
	else if (h>5 and h<=19)
		cout<<"Rooz";
	else if (h>19 && h<=24)
		cout<<"Shab haye bi tarana ...";
	else
		cout<<"Error";

	return 0;
}