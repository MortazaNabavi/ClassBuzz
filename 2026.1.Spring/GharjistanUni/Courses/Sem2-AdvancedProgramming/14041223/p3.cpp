#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int answer=1;
	
	for (int counter=0; counter<b; counter++)
		answer*=a;

	cout<<answer;
}