#include <iostream>
using namespace std;
int main(){
	
	int number=0;
	printNumber:
	cout<<number<<endl;
	
	number=number+1;
	
	if (number<=100){
		goto printNumber;
	}
	
	return 0;
}