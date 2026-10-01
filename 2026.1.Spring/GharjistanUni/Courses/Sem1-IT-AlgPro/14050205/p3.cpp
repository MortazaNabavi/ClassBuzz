#include <iostream>
using namespace std;
int main(){
	float m1,c1,m2,c2,m3,c3;
	
	cout<<"Enter M,C C++: ";
	cin>>m1>>c1;
	cout<<"Enter M,C Saqafat: ";
	cin>>m2>>c2;
	cout<<"Enter M,C Electronic: ";
	cin>>m3>>c3;
	
	float sum=m1*c1+m2*c2+m3*c3;
	float cTotal=c1+c2+c3;
	float av=sum/cTotal;
	cout<<av;
}