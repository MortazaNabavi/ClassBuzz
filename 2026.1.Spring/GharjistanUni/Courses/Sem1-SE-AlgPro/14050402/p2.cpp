#include <iostream>
using namespace std;
int main(){
	int n, sigma=0;
	cout<<"Enter N: ";
	cin>>n;
	shart:
		if(n>=1){
			sigma+=n;
			n--;
			goto shart;
		}
	cout<<"SIGMA: "<<sigma;
	return 0;
}