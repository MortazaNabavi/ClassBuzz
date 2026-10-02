#include <iostream>
using namespace std;
int main(){
	
	int h1, m1;
	cin>>h1>>m1;
	
	int h2= h1*10/24;
	int m2=m1*100/60;
	
	cout<<h1<<" : "<<m1<<" ------> "<<h2<<" : "<<m2;
	
	return 0;
}