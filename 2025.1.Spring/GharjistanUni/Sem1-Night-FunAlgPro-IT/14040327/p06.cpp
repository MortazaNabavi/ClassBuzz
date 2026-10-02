#include <iostream>
using namespace std;
int main(){
	int a=100;
	
	while (a>=-100){
		if (a%2==0)
			cout<<a<<"\t";
		a=a-1;
	}
	
	return 0;
}