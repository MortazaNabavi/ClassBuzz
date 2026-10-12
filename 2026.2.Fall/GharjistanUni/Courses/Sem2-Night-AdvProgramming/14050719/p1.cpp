#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter N: ";
	cin>> n;
	
	float x;
	cin>> x;
	float max= x;
	
	for (int i=1; i<n; i++){
		cin >> x;
		if (x> max)
			max= x;
	}
	cout<< max;
}