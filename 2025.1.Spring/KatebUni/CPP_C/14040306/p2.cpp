#include <iostream>
using namespace std;
int main(){
	
	int num=100;
	comeHere:
	cout<<num<<endl;
	
	num--;  //	num=num-1;   //  num-=1;
	
	if (num>=-100)
		goto comeHere;
	
	return 0;
}