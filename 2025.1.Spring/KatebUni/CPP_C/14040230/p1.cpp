#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the Score: ";
	
	double score;
	cin>>score;
	
	if (score >100)
		cout<<"Wrong Score!";
	else if (score > 95)
		cout<<"A";
	else if (score > 85)
		cout<<"B";
	else if (score > 75)
		cout<<"C";
	else if (score>65)
		cout<<"D";
	else if (score >55)
		cout<<"E";
	else if (score>0)
		cout<<"F";
	else
		cout<<"Wrong Score!";
	
	
	return 0;
}