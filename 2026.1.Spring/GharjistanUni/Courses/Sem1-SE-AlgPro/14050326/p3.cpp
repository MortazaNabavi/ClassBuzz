#include <iostream>
using namespace std;
int main(){
	int i=100;
	SHART:
	if (i>=0){
		cout<<i<<endl;
		i--;	// i=i-1	 i-=1
		goto SHART;
	}
	
}