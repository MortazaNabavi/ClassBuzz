#include <iostream>
using namespace std;
int main(){
	int x;
	cin >>x;
	
	int _1st=x/100;
	int _2nd= (x%100)/10;
	int _3rd= (x%100)%10;
	
	int result= _1st + _2nd + _3rd;
	cout <<result;
	return 0;
	
}