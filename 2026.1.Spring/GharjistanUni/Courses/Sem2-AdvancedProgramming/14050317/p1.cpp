#include <iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	
	back:
	if (n>0){
		cout<<n%10<<"\t";
		n/=10;
		goto back;
	}
}