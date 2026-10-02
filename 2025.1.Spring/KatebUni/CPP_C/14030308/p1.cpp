#include <iostream>
using namespace std;
int main(){
	int a=-100;
	
	back:
	if (a<=100){
		cout<<a<<"\t";
		a=a+1;
		goto back;
	}
	
	return 0;
}