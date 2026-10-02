#include <iostream>
using namespace std;
int main(){
	double a=0;
	back:
	if (a<=100){
		cout<<a<<"\t";
		a+=2;
		goto back;
	}
	
	
}