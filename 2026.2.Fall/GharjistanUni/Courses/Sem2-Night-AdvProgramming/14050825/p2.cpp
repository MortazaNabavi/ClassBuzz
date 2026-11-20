#include <iostream>
#include <string>
using namespace std;
int main(){
	string firstName, lastName, fullName;
	cin >>firstName;
	cin >>lastName;
	fullName=firstName+" "+lastName;
	string message="Hello "+fullName+"!";
	cout <<message;
	return 0;
}