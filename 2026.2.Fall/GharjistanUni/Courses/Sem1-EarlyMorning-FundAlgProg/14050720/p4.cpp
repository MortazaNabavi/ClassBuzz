#include <iostream>
using  namespace std;
int main(){
	float usage, box, stationary, pay, fee;
	box =30;
	stationary =10;
	fee =2.5;
	cin >>usage;
	pay= usage*fee+box+stationary; 
	cout <<pay;
	return 0;
}