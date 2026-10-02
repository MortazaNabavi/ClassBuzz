#include <iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	
	//			and   &&
	//			or		||
	
	if (time <0 || time>24)
		cout<<"*********";
	else if (time>=0 and time <=4)
		cout<<"Shab";
	else if (time>4 && time <=19)
		cout<<"Rooz";
	else if (time>19 and time <=24)
		cout<<"Shab Haye Bi Tarana ";
	
	return 0;
}