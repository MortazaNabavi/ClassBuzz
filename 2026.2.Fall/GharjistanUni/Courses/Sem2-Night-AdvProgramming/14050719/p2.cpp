#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter N: ";
	cin>> n;
	
	double x;
	cout<<"#1 Enter Number: ";
	cin>> x;
	double max= x;
	
	for (int i=1; i<n; i++){
		cout<<"#"<<i+1<<" Enter Number: ";
		cin >> x;
		if (x> max)
			max= x;
	}
	cout<< max<<" is the MAX";
	return 0;
}