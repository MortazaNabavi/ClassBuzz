#include <iostream>
using namespace std;

int main(){
	
	double R;
	cin>>R;
	
	double Sq;
	Sq=(2*R)*(2*R);
	
	double Cr;
	Cr=3.14*R*R;
	
	double Ans;
	Ans=Sq-Cr;
	
	cout<<Ans;
	
	return 0;
}