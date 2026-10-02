#include <iostream>
using namespace std;
int main(){
	
	int num;
	num=1;
	
	printNum:
	cout<<num<<endl;

	num=num+1;
	
	if (num<=100){
		goto printNum;
	}
	
	return 0;
}