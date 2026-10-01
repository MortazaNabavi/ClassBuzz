#include <iostream>
using namespace std;
int main(){
	int n, result, counter;
	cin>>n;
	result=1;
	for (counter=1;counter<=n;counter++)
		result*=counter;	
	cout<<result;	
}