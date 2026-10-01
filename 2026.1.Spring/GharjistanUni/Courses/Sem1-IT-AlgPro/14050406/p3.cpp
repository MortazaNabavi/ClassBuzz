#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter N:";
	cin>> n;
	
	int answer=1;
	int i=1;
	
	SHART:
		if (i<=n){
			answer*=i;	//answer=answer*i;
			i++;	//i+=1;		//i=i+1;
			goto SHART;
		}
	cout<<n<<"! = "<<answer;
	
	return 0;
}