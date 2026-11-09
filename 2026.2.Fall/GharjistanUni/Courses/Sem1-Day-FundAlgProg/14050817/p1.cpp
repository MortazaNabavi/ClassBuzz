#include <iostream>
using namespace std;
int main(){
	int h;
	cin >>h;
	
	if (h<0)
		cout<<"Error";
	else if (h<=5)
		cout <<"Shab";
	else if (h<=19)
		cout <<"Rooz";
	else if (h<=24)
		cout << "Shab";
	else
		cout <<"Error";
	
	return 0;	
}