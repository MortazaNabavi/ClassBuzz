#include <iostream>
using namespace std;
int main(){
	int i=100;
	
	SHART:
	if (i>=-100){
		cout<<i<<" * ";
		i=i-2;
		goto SHART;
	}
	return 0;
}