#include <iostream>
using namespace std;
int main(){
	cout<<"Enter N: ";
	int n;
	cin>>n;
	int i=1;
	int factorial=1;
	LOOP:
		if (i<=n){
			factorial*=i;	//factorial=factorial*i;
			i++;	//i+=1;	//i=i+1
			goto LOOP;	
		}
	cout<<n<<"!=\t"<<factorial;
	return 0;
}