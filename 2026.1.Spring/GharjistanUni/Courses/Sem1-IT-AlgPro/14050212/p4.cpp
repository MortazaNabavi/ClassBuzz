#include <iostream>
using namespace std;
int main(){
	float usage, fee, box,
	stationery,	cost, pay;
	
	cin>>usage;
	fee=3;
	box=200;
	stationery=20;
	cost=usage*fee;
	pay=cost+box+stationery;
	cout<<pay;
}