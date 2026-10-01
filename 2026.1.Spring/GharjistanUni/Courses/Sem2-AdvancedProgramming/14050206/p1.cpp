#include <iostream>
using namespace std;
int main(){
	int x=100;
	back:
	if(x>=-100){
		cout<<x<<"\t";
		x=x-1;
		goto back;
	}
}