#include <iostream>
using namespace std;
int main(){
	int x, sum=0;
	cin>>x;
	int n=x;
	while(x>0){
		int num;
		cin>>num;
		sum+=num;
		x--;
	}
	cout<<"Sum:\t"<<sum<<"\nAv:\t"<<sum/n;
}