#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int i=1;
	int flag=0;
	while (i<=a){
		if(a%i==0)
			flag++;
		i++;
	}
	if (flag==2)
		cout<<a<<" is PRIME";
	else
		cout<<a<<" is NOT PRIME";
	return 0;
}