#include <iostream>
using namespace std;
int main(){
	
	int y;
	int age;
	
	cout<<"Enter your year of birth: ";
	cin>>y;
	age=2025-y;
	
	cout<<"You are ";
	cout<<age;
	cout<<" years old.";
	
	return 0;
}