#include <iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	
	if (number%2==0){
		if (number%3==0){
			cout<<"Yes! ";
		}
	}else{
		cout<<"No!";
	}
	
	return 0;
}