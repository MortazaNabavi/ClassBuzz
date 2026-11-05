#include <iostream>
using namespace std;
int main(){
	int m;
	cin >>m;
	
	if (m==1 or m==2 or m==3)
		cout<<"Bahar";
	else if (m==4 or m==5 or m==6)
		cout<<"Tabestan";
	else if (m==7 || m==8 || m==9)
		cout <<"Khazan";
	else if (m==10 or m==11 || m==12)
		cout <<"Zamestan";
	else
		cout <<"ERROR!";
	
	return 0;
}