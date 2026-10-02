#include <iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int factorial=1;

	while (x>0){
		factorial= factorial*x;
		x--;
	}
	cout<<factorial;	
	return 0;
}