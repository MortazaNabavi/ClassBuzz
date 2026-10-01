#include <iostream>
using namespace std;
int main(){
	int i=100;
	Back:
	if(i>=-100){
		cout<<i<<"\t";
		i=i-2;
		goto Back;
	}
	return 0;
}