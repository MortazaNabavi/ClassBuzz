#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int index=1;
	SHART:
	if (index<=n){
		if (n%index==0)
			cout<<index<<"\t";
		index++;
		goto SHART;
	}
}