#include <iostream>
using namespace std;
int main(){
	cout<<"Please Enter Your Birth Year: ";
	int birthYear;
	cin>>birthYear;
	
	int now=1405;
	int age=now-birthYear;
	
	cout<<"You are "<<age<<" Years old!";
}