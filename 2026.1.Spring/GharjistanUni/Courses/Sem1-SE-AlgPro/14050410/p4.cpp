#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int counter=0;
	loop:
		if (i<=n){
			if(n%i==0)
				counter++;	//cout<<i<<"\t";
			i++;
			goto loop;
		}
	cout<<counter;
	return 0;
}