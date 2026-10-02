#include <iostream>
using namespace std;
int main(){
	int a, b, sum=0;
	cin>>a>>b;
	back:
	if (a<=b){
		sum+=a; // sum=sum+a;
		a++;	// a+=1;	a=a+1;
		goto back;
	}else{
		cout<<"sum:\t"<<sum;
	}
	
	return 0;
}