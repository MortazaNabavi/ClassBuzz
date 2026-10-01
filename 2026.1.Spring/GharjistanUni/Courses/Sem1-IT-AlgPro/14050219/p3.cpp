#include <iostream>
using namespace std;
int main(){
	float score;
	cout<<"Enter Your Score: ";
	cin>>score;
	int minScore=55;
	
	if(score>100){
		cout<<"Error!";
	}else if (score<0){
		cout<<"Error!";
	}else if(score<minScore){
		cout<<"Failed! You are Loser :(";
	}else{
		cout<<"Passed! :)";
	}	
}