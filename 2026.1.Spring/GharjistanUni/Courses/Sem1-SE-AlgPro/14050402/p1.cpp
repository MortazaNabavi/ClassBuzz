#include <iostream>
using namespace std;
int main(){
	int n, sigma, i;
	cout<<"Enter N: ";
	cin>>n;
	
	sigma=0;
	i=1;
	
	SHART:
	if (i<=n)
	{
		sigma+=i;	//sigma=sigma+i;
		i++;	//i+=1;	//i=i+1;
		goto SHART;
	}
	cout<<"SIGMA: "<<sigma;
	
	return 0;
}