#include <iostream>
using namespace std;
int main(){
	int birthYear;
	int now= 2026;
	cin >>birthYear;
	int age= now-birthYear;
	
	if (age>=18){
		cout <<"you can vote!";
	}
	else{
		cout <<"you can NOT vote!";
	}
	return 0;
}