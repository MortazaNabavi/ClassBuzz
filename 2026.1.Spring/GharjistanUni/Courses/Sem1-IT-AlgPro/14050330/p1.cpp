#include <iostream>
using namespace std;
int main(){
	int i=0;
	Back:
	if (i<=1000){
		cout<<i<<"\t";
		i=i+1;
		goto Back;
	}
	return 0;
}