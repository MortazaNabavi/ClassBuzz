#include <iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int digits=0;
	back:
	if (n>0){
		digits++;
		n/=10;
		goto back;
	}
	cout<<digits;
}