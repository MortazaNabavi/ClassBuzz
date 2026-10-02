#include <iostream>
using namespace std;
int main(){
	int a;
	int i=2;
	int flag=0;
	cin>>a;
	Shart:
	if (i<=a/2){
		
		if (a%i==0){
			flag++;
	}
	i++;
	goto Shart;
	}
	
	if(flag==0)
		cout<<a<<" is PRIME Number.";
	else
		cout<<a<<" is NOT PRIME Number.";
	
	return 0;
}