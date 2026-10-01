#include <iostream>
using namespace std;
int main(){
	cout<<"Salaam Ezat!";
	
	float usage;
	cout<<"Enter Usage: ";
	cin>>usage;
	
	float Fee=3;
	float Box=200;
	float Stationery=20;
	float Pay=usage*Fee+Box+Stationery;
	
	cout<<"PAY: "<<Pay<<" AFNs";
}