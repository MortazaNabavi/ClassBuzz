#include <iostream>
using namespace std;
int main(){
	bool a= 1;
	bool b= 1;
	bool d= 0;
	bool c= a and b and d;
	if (c)
		cout<<"Hi";
	else
		cout<<"Bye";
}