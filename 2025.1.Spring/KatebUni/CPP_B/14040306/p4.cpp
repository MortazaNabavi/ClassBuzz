#include <iostream>
using namespace std;
int main(){
	
	int num=0;
	ComeHere:
	
	if (num%2==0)
		cout<<num<<endl;
	
	num+=1;
	if (num<=1000)
		goto ComeHere;
	
	return 0;
}
