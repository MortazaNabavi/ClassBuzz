#include <iostream>
using namespace std;
int main(){
	int month;
	cin>>month;
	
	if (month<1)
		cout<<"Error!";
	else if (month<4)
		cout<<"Bahar!";
	else if (month<=6)
		cout<<"Tabestan!";
	else if (month <10)
		cout<<"Khazaan!";
	else if (month <=12)
		cout<<"Zemestan!";
	else
		cout<<"Error!";
	
}