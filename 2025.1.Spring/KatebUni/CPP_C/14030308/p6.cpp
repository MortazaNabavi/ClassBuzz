#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	int sum=0;
	INJA:
	if (a<=b){
		sum=sum+a;
		a++;
		goto INJA;
	}else{
		cout<<"SUM:\t"<<sum;
	}
	return 0;
}