#include <iostream>
using namespace std;
int main(){
	
	cout<<"Enter Score: ";
	double score;
	cin>>score;
		
	if (score > 100)
		cout<<"Wrong Score :/";
	else if (score >=55)
		cout<<"Passed! :)";
	else if (score >=0)
		cout<<"Failed! :(";
	else
		cout<<"Wrong Number :/";
		
	return 0;
}