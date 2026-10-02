#include <iostream>
using namespace std;
int main(){
	
	double score;
	cin>>score;
	
	if(score>100)
		cout<<"Error! ";
	else if (score<0)
		cout<<"Error! ";
	else if(score>=55)
		cout<<"Passed!";
	else
		cout<<"Failed!";
	
	return 0;	
}