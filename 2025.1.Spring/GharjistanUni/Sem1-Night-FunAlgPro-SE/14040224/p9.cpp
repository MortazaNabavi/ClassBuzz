#include <iostream>
using namespace std;
int main(){
	
	int birthYear;
	cin>>birthYear;
	
	if(1404-birthYear>=18)
		cout<<"Sen Qanooni";
	else
		cout<<"Zir Sen";
	
	return 0;
}