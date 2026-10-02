#include <iostream>
using namespace std;
int main(){
	
	int num=0;
	ComeHere:
	cout<<num<<endl;
	
	num+=2;  // num=num+2;
	
	if (num<=1000)
		goto ComeHere;
	
	
	return 0;
}