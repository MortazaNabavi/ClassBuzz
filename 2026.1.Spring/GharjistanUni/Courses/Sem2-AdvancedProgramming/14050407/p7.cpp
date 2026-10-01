#include <iostream>
using namespace std;

float power(float x, int y){
	int result=1;
	for (int i=1; i<=y; i++)
		result*=x;
	return result;
}

float sum(float x, float y){
	return x+y;
}

float Fazullah(int a, int b, int c){
	return power(sum(a,b), c);
}

int main(){
	cout<<Fazullah(4, 5, 2);
}