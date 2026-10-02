#include <iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	
	bool a=number%2==0 && number%3==0;
	if (a)
		cout<<"Yes!";
	else
		cout<<"No! ";
	
	return 0;
}