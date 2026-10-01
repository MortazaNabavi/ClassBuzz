#include <iostream>
using namespace std;
int main(){
	int t;
	cin>> t;
	
	if (t>=0 and t<=5)
		cout<<"Shab Haye Bi Tarana ...";
	else if (t<=19 && t>=6)
		cout<<"Rooz";
	else if (t<=24 and t>=20)
		cout<<"Bia Shab Haye Mahtab Ast ...";
	else
		cout<<"Khataa!";
}