#include <iostream>
using namespace std;
int main(){
	float qMilk, qRice, qSugar;
	cout<<"Enter QTY for Milk: ";
	cin>>qMilk;
	cout<<"Enter QTY for Rice: ";
	cin>>qRice;
	cout<<"Enter QTY for Sugar: ";
	cin>>qSugar;
	
	float fMilk=50;
	float fRice=160;
	float fSugar=70;
	
	float tMilk=qMilk*fMilk;
	float tRice=qRice*fRice;
	float tSugar=qSugar*fSugar;
	float Total=tMilk+tRice+tSugar;
	float discountRate=15;
	float Discount=Total*discountRate/100;
	float taxRate=20;
	float Tax=(Total-Discount)*taxRate/100;
	float Payable=Total-Discount+Tax;
	
	
	cout<<"Item\tFEE\tQTY\tTOTAL\n";
	cout<<"Milk\t"<<fMilk<<"\t"<<qMilk<<"\t"<<tMilk<<"\n";
	cout<<"Rice\t"<<fRice<<"\t"<<qRice<<"\t"<<tRice<<"\n";
	cout<<"Sugar\t"<<fSugar<<"\t"<<qSugar<<"\t"<<tSugar<<"\n";
	cout<<"Total\t\t\t"<<Total<<"\n";
	cout<<"Discount\t"<<discountRate<<"\t"<<Discount<<"\n";
	cout<<"Tax\t\t"<<taxRate<<"\t"<<Tax<<"\n";
	cout<<"PAY\t\t\t"<<Payable;
	
}