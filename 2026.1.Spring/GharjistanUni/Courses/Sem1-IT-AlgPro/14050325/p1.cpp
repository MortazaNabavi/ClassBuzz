#include <iostream>
using namespace std;
int main(){

	int i= 0;
	folanJay:
	if (i<=1000){
		cout<<i<<"\t";
		i=i+1;
		goto folanJay;
	}
	return 0;
}