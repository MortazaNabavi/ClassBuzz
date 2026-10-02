#include <iostream>
using namespace std;
int main(){
	/*int a;
	cin>>a;
	int i=1;
	back:
		if(i<=a){
			if(a%i==0)
				cout<<i<<"\t";
			i++;
			goto back;
		}*/
	int a;
	cin>>a;
	int i=1;
	while (i<=a){
		if(a%i==0)
			cout<<i<<"\t";
		i++;
	}			
	return 0;
}