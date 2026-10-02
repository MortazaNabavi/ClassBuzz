#include <iostream>
using namespace std;
int main(){
	
	double r;
	cin>>r;
	
	double sq;
	sq=(r*2)*(r*2);
	
	double cr;
	cr=3.14*r*r;
	
	double answer;
	answer=sq-cr;
	
	cout<<answer;
	
	return 0;
}