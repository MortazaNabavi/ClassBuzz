#include <iostream>
using namespace std;
int main(){
	
	int birthYear;
	cin>>birthYear;
	
	int age=1404-birthYear;
	
	if(age>=18)
		cout<<"Sen Qanooni";
	else
		cout<<"Zir Sen";
	
	return 0;
}