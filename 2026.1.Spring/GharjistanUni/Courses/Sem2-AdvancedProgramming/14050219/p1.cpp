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
	

	
	cout<<Payable;
}