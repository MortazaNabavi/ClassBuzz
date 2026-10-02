#include <iostream>
using namespace std;
int main(){
	int a=0;
	
	back:
	if (a<=100){
		cout<<a<<"\t";
		a=a+2;
		goto back;
	}
	
	return 0;
}