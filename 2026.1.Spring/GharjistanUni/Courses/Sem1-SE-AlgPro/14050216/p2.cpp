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
	
	float DiscountRate=15;
	float Discount=Total*DiscountRate/100;
	
	float TaxRate=20;
	float Tax=(Total-Discount)*TaxRate/100;
	
	float Pay=Total-Discount+Tax;
	
	cout<<"Item\tFee\tQTY\tTotal\n";
	cout<<"Milk\t"<<fMilk<<"\t"<<qMilk<<"\t"<<tMilk<<endl;
	cout<<"Rice\t"<<fRice<<"\t"<<qRice<<"\t"<<tRice<<endl;
	cout<<"Sugar\t"<<fSugar<<"\t"<<qSugar<<"\t"<<tSugar<<endl;
	cout<<"TOTAL:\t\t\t"<<Total<<endl;
	cout<<"Discount:t"<<DiscountRate<<"%\t"<<Discount<<endl;
	cout<<"Tax:"<<TaxRate<<"%\t"<<Tax<<endl;
	cout<<"PAYABLE:\t\t"<<Pay;
	
}