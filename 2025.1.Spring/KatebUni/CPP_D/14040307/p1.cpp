#include <iostream>
using namespace std;
int main(){
	int a =1;
	
	printNumA:
		cout<<a<<"\t";
	a=a+1;
	
	if(a<=100)
		goto printNumA;
	
	return 0;
}