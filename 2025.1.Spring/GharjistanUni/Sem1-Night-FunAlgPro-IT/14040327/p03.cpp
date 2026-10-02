#include <iostream>
using namespace std;
int main(){
	int a=0;
	back:
	if (a<=100000){
		
		if (a%2==0){
			cout<<a<<"\t";}
		a=a+1;
		goto back;
	}
	return 0;	
}