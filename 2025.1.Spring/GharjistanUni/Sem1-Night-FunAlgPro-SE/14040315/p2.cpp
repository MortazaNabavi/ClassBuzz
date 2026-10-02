#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	back:
	if (a<=b){
		if (a%2==0)
			cout<<a<<"\t";
		a++;
		goto back;
	}	
}