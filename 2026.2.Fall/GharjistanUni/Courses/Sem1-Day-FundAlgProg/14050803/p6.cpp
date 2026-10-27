#include <iostream>
using namespace std;
int main(){
	int birthYear;
	int now=1405;
	int minAge=18;
	
	cin >>birthYear;
	int age= now-birthYear;
	
	if (age >= minAge)
		cout<<"You can vote!";
	else
		cout<<"You can NOT vote! "<<
		minAge-age<<" years later Inshallah!";
		
	return 0;
}