#include <iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	
	if (time<=5){
		cout<<"Shab";
	}
	else if (time <=19){
		cout<<"Rooz";
	}
	else
		cout<<"Shab Haye Bi Tarana Namana";
	return 0;
}