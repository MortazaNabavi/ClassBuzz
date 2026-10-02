#include <iostream>
using namespace std;
int main(){
	cout<<"Enter Score: ";
	double score;
	cin>>score;
	
	if (score>100)
		cout<<"Wrong Score!";
	if (score>95)
			cout<<"A";
	if (score>85)
		cout<<"B";
	if (score>75)
		cout<<"C";
	if (score > 65)
		cout<<"D";
	if (score >=55)
		cout<<"E";
	if(score>=0)
		cout<<"F";
	
	
	
	return 0;
}