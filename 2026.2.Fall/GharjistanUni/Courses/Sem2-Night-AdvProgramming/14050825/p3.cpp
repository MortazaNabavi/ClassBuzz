#include <iostream>
#include <string>
using namespace std;
int main(){
	string name[3];
	cin >>name[0];	//firstName
	cin >>name[1];	//lastName
	name[2]=name[0]+" "+name[1]; //fullName //concatination
	string message="Hello "+name[2]+"!";
	cout <<message;
	return 0;
}