#include<iostream>
using namespace std;
int main(){
	float m1,m2,m3;
	float c1,c2,c3;
	cout<<"C++ M ,C: ";
	cin>>m1>>c1;
	cout<<"Saqafat M ,C: ";
	cin>>m2>>c2;
	cout<<"Electronic M ,C: ";
	cin>>m3>>c3;
	
	float sum=m1*c1+m2*c2+m3*c3;
	float cTotal=c1+c2+c3;
	float average=sum/cTotal;
	
	cout<<"average"<<average;
}