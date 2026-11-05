#include <iostream>
using namespace std;
int main(){
	int m;
	cin >>m;
	
	if (m<1)
		cout<<"Error!";
	else if (m<=3)
		cout<<"Bahar";
	else if (m<=6)
		cout <<"Tabestan";
	else if (m<=9)
		cout <<"Khazan";
	else if (m<=12)
		cout<<"Zamestan";
	else
		cout<<"Error!";
	
	return 0;
}