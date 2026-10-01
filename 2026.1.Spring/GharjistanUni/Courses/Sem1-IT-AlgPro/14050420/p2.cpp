#include <iostream>
using namespace std;

int	sigma (int a, int b){
	int i=a;
	int _sigma=0;
	while (i<=b){
		_sigma=_sigma+i;
		i=i+1;
	}
	return _sigma;
}


int main(){
	

	cout<<sigma(2,4);
cout<<sigma(20,4);
	cout<<sigma(2,40);
	cout<<sigma(20,40);
	return 0;
}