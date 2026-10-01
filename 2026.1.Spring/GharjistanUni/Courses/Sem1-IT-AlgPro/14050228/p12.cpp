#include <iostream>
using namespace std;
int main(){
	int month;
	cin>>month;
	
	if (month>=1 && month<=3)
		cout<<"Spring";
	else if (month>3 and month<=6)
		cout<<"Summer";
	else if (month<1 or month >12)
		cout<<"Error!";
	else if (month>6 && month <=9)
		cout<<"Fall";
	else
		cout<<"Winter";

}