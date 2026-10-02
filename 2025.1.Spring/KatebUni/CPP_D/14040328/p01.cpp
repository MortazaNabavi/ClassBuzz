#include <iostream>
using namespace std;
int main(){
	int pFinal, pMid, pHW;
	cout<<"Enter pFinal: "; cin>>pFinal;
	cout<<"Enter pMidTerm: "; cin>>pMid;
	cout<<"Enter pHW: "; cin>>pHW;
	int Final=pFinal*60/100;
	int MidTerm=pMid*30/100;
	int HW=pHW*10/100;
	int total=Final+MidTerm+HW;
	if (total<55)
		cout<<"Failed :(";
	else
		cout<<"Passed :)";
	
	cout<<endl;
	cout<<"Final:\t"<<pFinal<<" : "<<Final<<endl;
	cout<<"MidTerm:\t"<<pMid<<" : "<<MidTerm<<endl;
	cout<<"HomeWork:\t"<<pHW<<" : "<<HW<<endl;
	return 0;
}