#include <iostream>
using namespace std;
int main(){
	
	int num=1;
	
	printNUM:
	cout<<num<<endl;
	
	num= num+1;
	
	if (num<=100){
		goto printNUM;
	}
	
	return 0;
}