#include <iostream>
using namespace std;
int main(){
	int birthYear;
	cout<<"Enter Your Birth Year: ";
	cin>>birthYear;
	
	int Now=1405;
	int Age=Now-birthYear;
	int legalAge=18;
	cout<<"You are "<<Age<<" Years Old"<<endl;
	if (Age>=legalAge){
		cout<<"You Can Vote!";
	}else{
		cout<<"You Can NOT Vote!"<<endl;
		int left=legalAge-Age;
		cout<<left<<" Years Later InshAllah!";
	}
}