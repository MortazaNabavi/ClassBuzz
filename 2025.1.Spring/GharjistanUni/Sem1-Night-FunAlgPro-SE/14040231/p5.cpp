#include <iostream>
using namespace std;
int main(){
	 int time;
	 cin>>time;
	 
	 if (time<0)
	 	cout<<"****";
	else if (time <5)
		cout<<"Shab";
	else if (time <19)
		cout<<"Rooz";
	else if (time <=24)
		cout<<"Shab haye bi tarana ";
	else
		cout<<"*******";
	
	return 0;
}