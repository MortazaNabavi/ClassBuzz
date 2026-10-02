#include <iostream>
using namespace std;
int main(){
	
	int d;
	cin>>d;
	
	int h;
	int m;
	int s;
	
	h=d*24;
	m=h*60;
	s=m*60;
	
	cout<<h<<endl;
	cout<<m<<endl;
	cout<<s;
	
	
	return 0;
}