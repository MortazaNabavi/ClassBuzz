#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int index=1;index<=n;index++)
		if (n%index==0)
			cout<<index<<"\t";
}