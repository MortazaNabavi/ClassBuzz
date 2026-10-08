#include <iostream>
using namespace std;

int power(int x, int y){
	int result=1;
	for (int i=1; i<=y; i++)
		result*=x;
	return result;
}

int main(){
	cout<< power(2, 8);
}