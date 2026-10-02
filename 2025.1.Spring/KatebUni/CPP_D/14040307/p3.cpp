#include <iostream>
using namespace std;
int main(){
	int a=100;
	amoonja:
	cout<<a<<"\t";
	a=a-1;
	if (a>= -100)
		goto amoonja;
	
	return 0;
}