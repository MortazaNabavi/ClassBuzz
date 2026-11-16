#include <iostream>
using namespace std;
int main(){
	float score, minScore2Pass=55;
	cout <<"Enter Score: ";
	cin >>score;
	
	if (score < minScore2Pass)
		cout <<"Failed :(";
	else
		cout <<"Passed :)";
		
	return 0;
}