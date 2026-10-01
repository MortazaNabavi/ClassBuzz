#include <iostream>
using namespace std;

int sum(int num1, int num2){
	int result=num1+num2;
	return result;
}

int main(){
	int a=sum(40, 90);
	cout<<a;
	return 0;
}