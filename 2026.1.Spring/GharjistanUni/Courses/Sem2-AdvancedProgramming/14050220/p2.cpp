#include <iostream>
using namespace std;
int main(){
	int n, result, counter;
	cin>>n;
	result=1;
	counter=1;
	while (counter<=n){
		result*=counter;
		counter+=1;
	}
	cout<<result;	
}