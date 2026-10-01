#include <iostream>
using namespace std;
int main(){
	int i=100;
	SHART:
	if (i>=-100){
		if (i%2==0)
			cout<<i<<"\t";
		i=i-1;
		goto SHART;
	}
	return 0;
}