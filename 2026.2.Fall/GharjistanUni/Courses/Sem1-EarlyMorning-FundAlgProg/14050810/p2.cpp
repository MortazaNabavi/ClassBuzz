#include <iostream>
using namespace std;
int main(){
	int x;
	cin >>x;
	
	int _1st=x/100;
	int _2nd= (x%100)/10;
	int _3rd= (x%100)%10;
	
	int result= _3rd*100 + _2nd*10 + _1st;
	
	int result1= _1st + _2nd + _3rd;
	cout <<result<<"\t "<<result1;
	return 0;
	
}