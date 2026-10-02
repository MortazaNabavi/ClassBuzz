#include <iostream>
using namespace std;
int main(){
	
	int a, b, sum;
	cin>>a>>b;
	int n= b-a+1;
	sum=0;
	
	myLabel:
		cout<<a<<endl;
	sum=sum+a;
	a=a+1;
	
	if (a<=b)
		goto myLabel;
	
	cout<<"\n\nSum:"<<sum;
	
	double av=sum/n;
	
	cout<<"\nAV= "<<av;
		
	return 0;
}