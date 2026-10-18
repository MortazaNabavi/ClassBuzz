#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin >>a >>b;
	
	int temp= a+b;
	a= temp-a;
	b= temp-b;
	
	cout <<a <<"\t"<<b;
	return 0;
}