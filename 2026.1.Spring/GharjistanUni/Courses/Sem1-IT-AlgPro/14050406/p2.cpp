#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Enter A: ";
	cin>>a;
	cout<<"Enter B: ";
	cin>>b;
	
	int answer=0;
	int i=a;
	
	SHART:
	if(i<=b){
		answer+=i;	//answer=answer+i;
		i++;	//i+=1;	//i=i+1;
		goto SHART;
	}
	cout<<"Answer: "<<answer;
	return 0;
}