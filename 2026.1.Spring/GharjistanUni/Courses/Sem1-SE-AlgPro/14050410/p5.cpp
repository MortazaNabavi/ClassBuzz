#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int counter=0;
	loop:
		if (i<=n){
			if(n%i==0){
				cout<<counter+1<<")\t"<<i<<endl;
				counter++;
			}
			i++;
			goto loop;
		}
	return 0;
}