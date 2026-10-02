#include <iostream>
using namespace std;
int main(){
	
	int year;
	cin>>year;
	
	int age;
	age=1404-year;
	
	cout<<age<<endl;
	if(age>18){
		cout<<"Sen Qanooni";
	}
	else{
		cout<<"Zir Sen";
	}
		
	return 0;
}