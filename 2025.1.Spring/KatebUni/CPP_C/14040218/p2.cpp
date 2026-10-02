#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	
	int ans=a/b;
	int mod=a%b;
	
	cout<<ans<<"\n"<<mod;
	
	return 0;
}