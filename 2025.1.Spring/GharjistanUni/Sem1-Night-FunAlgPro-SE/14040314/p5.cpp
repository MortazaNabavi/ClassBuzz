#include <iostream>
using namespace std;
int main(){
	int a=100;
	amoonja:
	if(a>=-100){
		cout<<a<<"\t";
		a=a-1;
		goto amoonja;
	}
	return 0;
}