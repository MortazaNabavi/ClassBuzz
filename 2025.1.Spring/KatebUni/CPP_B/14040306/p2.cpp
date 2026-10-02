#include <iostream>
using namespace std;
int main(){
	
	int a= 100;
	printHERE:
	cout<<a<<endl;
	
	a=a-1;
	
	if (a>=-100)
		goto printHERE;
	
	return 0;
}