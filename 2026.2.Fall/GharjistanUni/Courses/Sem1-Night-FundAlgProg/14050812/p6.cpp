#include <iostream>
using namespace std;
int main(){
	int m;
	cin >>m;
	
	if (m>=1 and m<=3)
		cout<<"Bahar";
	else if (m>=4 and m<7)
		cout<<"Tabestan";
	else if (m>=7 && m<=9)
		cout<<"Khazan";
	else if (m>=10 && m<=12)
		cout<<"Zamestan";
	else
		cout<<"ERROR!";
	
	return 0;
}