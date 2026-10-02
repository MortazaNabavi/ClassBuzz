#include <iostream>
using namespace std;
int main(){
	
	int a, b, sum;
	sum=0;
	cin>>a>>b;
	cout<<"____________________";
	myLabel:
	cout<<a<<endl;
	sum+=a;
	a++;
	if (a<=b)
		goto myLabel;
	cout<<"____________________";	
	cout<<"SUM: "<< sum;
	return 0;
}
