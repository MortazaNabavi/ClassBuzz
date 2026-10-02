#include <iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	
	bool a=number%2==0;
	bool b=number%3==0;
	bool c=a and b;
	if (c)
		cout<<"Yes!";
	else
		cout<<"No! ";
	
	return 0;
}