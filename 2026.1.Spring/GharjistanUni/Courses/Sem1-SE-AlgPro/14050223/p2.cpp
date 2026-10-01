#include <iostream>
using namespace std;
int main(){
	cout<<"Enter your Score: ";
	float score;
	cin>>score;
	
	float minScore=55;
	
	if(score<minScore)
		cout<<"You Failed! You're LOSER :(";
	else
		cout<<"You Passed! ;)";
		
}