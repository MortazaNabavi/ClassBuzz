#include <iostream>
using namespace std;
int main(){
	float score, minScore=55;
	cin >> score;
	
	if (score <minScore){
		cout<< "Failed";
	}
	else{
		cout<< "Passed";
	}
	
	return 0;
}