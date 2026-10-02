#include <iostream>
using namespace std;
int main(){
	char a,b;
	cin>>a>>b;
	back:
	if (a<=b){
		cout<<a<<"\t";
		a++;
		goto back;
	}
	
	return 0;
}