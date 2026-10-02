#include <iostream>
using namespace std;

int Number_of_Digits(int number){
	int n=0;
	while (number>0){
		number/=10;
		n++;
	}
	return n;
}
int main(){
	int a;
	cin>>a;
	cout<<Number_of_Digits(a);
	return 0;
}