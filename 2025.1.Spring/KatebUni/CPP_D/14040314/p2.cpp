#include <iostream>
using namespace std;
int main (){
	int x;
	cin>>x;
	
	int factorial=1;
	
	back:
	if (x>1){
		factorial=factorial*x;
		x=x-1;
		goto back;
	}
	
	cout<<factorial;
}