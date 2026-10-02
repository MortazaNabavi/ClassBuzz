#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	
	bool a=m>=10;
	bool b=m<=12;
	
	if (m>0 && m<4)
		cout<<"Bahar";
	else if (m>3 && m<=6)
		cout<<"Tabestan";
	else if (m>=7 and m<=9)
		cout<<"Khazan";
	else if (a and b)
		cout<<"Zamestan";
	else
		cout<<"Error!";
	
	
	
	
	return 0;
}