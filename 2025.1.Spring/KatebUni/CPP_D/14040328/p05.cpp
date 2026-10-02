#include <iostream>
using namespace std;
int sum(int num1, int num2){
	int result=num1+num2;
	return result;
}

int main(){
	int a, b;
	cin>>a>>b;
	int c=sum(a,b);
	cout<<c;
	return 0;
}