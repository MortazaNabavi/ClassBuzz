#include <iostream>
using namespace std;
int main(){
	int h;
	cin >>h;
	
	if (h>5 and h<19)
		cout<<"Rooz";
	else if (h>=0 && h<=5)
		cout<<"Bia Shab haye Mahtab Ast ...";
	else if (h>=19 and h<=24)
		cout<<"Shab haye bi tarana ...";
	else
		cout<<"Error";
		
	return 0;	
}