#include <iostream>
using namespace std;
int main(){
	
	double score;
	cin>>score;
	
	if (score>100){
		cout<<"Wrong Score! ";
	}
	else if (score<0){
		cout<<"Wrong Score! ";
	}
	else if (score>=55)
	{
		cout<<"Passed! :)";
	}
	else
	{
		cout<<"Failed! You are loser :(";
	}
	return 0;
}