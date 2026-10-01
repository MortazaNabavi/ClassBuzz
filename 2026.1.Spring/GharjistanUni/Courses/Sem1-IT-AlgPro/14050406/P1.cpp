#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter N: ";
	cin>>n;
	int answer=0;
	int i=1;
	SHART:
	if(i<=n){
		answer+=i;	//answer=answer+i;
		i++;	//i+=1;	//i=i+1;
		goto SHART;
	}
	cout<<"Answer: "<<answer;
	
	return 0;
}