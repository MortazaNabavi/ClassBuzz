#include <iostream>
using namespace std;
int main(){

	int i= 100;
	folanJay:
	if (i<=200){
		cout<<i<<"\t";
		i=i+1;
		goto folanJay;
	}
	return 0;
}