#include <iostream>
using namespace std;
int main(){
	int birthYear, age, now=1405;
	cout <<"Enter Birth Year: ";
	cin >>birthYear;
	age= now-birthYear;
	
	if (age >= 18){
		cout <<age<<"years old. You can Vote!";
	}else{
		cout <<age<<"years old.You can NOT Vote!"<<
		18-age <<"years later Inshallah.";
	}
	return 0;
}