#include <iostream>
using namespace std;
int main(){
	int a;
	a=-100;
	Back:
	if (a<=100){
		cout<<a<<"*"<<-1*a<<"\t";
		a=a+1;
		goto Back;
	}
}