#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	
	if (m<=3)
		cout<<"Bahar";
	else if (m<=6)
		cout<<"Summer";
	else if (m<10)
		cout<<"Autumn";
	else
		cout<<"Zamestan";
	
	return 0;
}