#include <iostream>
using namespace std;
int main(){
	
	int a,b;
	cin>>a>>b;
	
	if (a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	there:
	cout<<a<<endl;
	a++;
	
	if (a<=b)
		goto there;
	
	return 0;
}