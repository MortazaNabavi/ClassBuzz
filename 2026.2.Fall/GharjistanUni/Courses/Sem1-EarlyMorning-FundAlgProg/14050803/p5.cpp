#include <iostream>
using namespace std;
int main(){
	int birthYear, age, now=1405;
	cout <<"Enter Birth Year: ";
	cin >>birthYear;
	age= now-birthYear;
	
	if (age >= 18){
		cout <<" You can Vote!";
	}else{
		cout <<"You can NOT Vote!";
	}
	return 0;
}