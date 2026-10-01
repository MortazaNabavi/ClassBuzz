#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter A: ";
	cin>>a;
	
	int answer=1;
	
	for (int i=1; i<=a; i++)
		answer=answer*i;
	
	cout<<a<<"!= "<<answer;	
}