#include <iostream>
using namespace std;
int main(){
	int x, f=1;
	cout<<"Enter X:\t";
	cin>>x;
	cout<<x<<"! = ";
	
	while(x>1){
		f*=x;
		x--;
	}
	cout<<f;
	return 0;
}