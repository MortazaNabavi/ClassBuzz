#include <iostream>
using namespace std;
int main(){
	
	double score;
	cin>>score;
	
 	if (score>=55)
	{
		cout<<"Passed! :)";
	}
	else if (score <55)
	{
		cout<<"Failed! You are loser :(";
	}
	else if (score>100){
		cout<<"Wrong Score! ";
	}
	else {
		cout<<"Wrong Score! ";
	}
	return 0;
}