#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	
	if (m<=0)
		cout<<"Khata! ";
	else if (m<=3)
		cout<<"Bahar";
	else if (m<=6)
		cout<<"Summer";
	else if (m<10)
		cout<<"Autumn";
	else if (m<=12)
		cout<<"Zamestan";
	else
		cout<<"Error!";
	return 0;
}