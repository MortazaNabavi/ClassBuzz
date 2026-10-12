#include <iostream>
using namespace std;

float maxFinder(int n){
	float input;
	cin >> input;
	float max= input;
	for (int i=1; i<n; i++){
		cin >> input;
		if (input > max)
			max= input;
	}
	return max;
}

int main(){
	cout << maxFinder(6);
	
	
	return 0;
}