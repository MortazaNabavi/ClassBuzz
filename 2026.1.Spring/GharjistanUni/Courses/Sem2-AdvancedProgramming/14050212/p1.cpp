#include <iostream>
using namespace std;
int main(){
	float a, b, i;
	cin>>a;
	cin>>b;
	i=a;
	Shart:
	if(i<=b){
		cout<<i<<endl;
		i=i+1;
		goto Shart;
	}	
}