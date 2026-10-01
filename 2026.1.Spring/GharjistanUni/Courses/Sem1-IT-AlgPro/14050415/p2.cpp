#include <iostream>
using namespace std;
int main(){
	int n, i, sigma;
	cin>>n;
	i=1;
	sigma=0;
	
	while(i<=n)	{
			sigma+=i;
			i++;
	}
		
	cout<<sigma;
	return 0;
}