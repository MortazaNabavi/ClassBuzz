#include <iostream>
using namespace std;
int main(){
	float qMilk, qSugar, qRice;
	cout <<"Enter Milk QTY.: ";
	cin >>qMilk;
	
	cout <<"Enter Sugar QTY.: ";
	cin >>qSugar;
	
	cout <<"Enter Rice QTY.: ";
	cin >>qRice;

	float fMilk =50;
	float fSugar =70;
	float fRice =160;
	
	float tMilk= qMilk*fMilk;
	float tRice= qRice*fRice;
	float tSugar= qSugar*fSugar;
	
	float total= tMilk+tRice+tSugar;
	
	float disRate= 15;
	float discount= total*disRate/100;
	
	float taxRate=20;
	float tax= (total-discount)*taxRate/100;
	
	float pay= total-discount+tax;
	
	cout <<"item\tQTY.\tFee\tTotal\n";
	cout <<"Milk\t"<<qMilk<<"\t"<<fMilk<<"\t"<<tMilk<<endl;
	cout <<"Sugar\t"<<qSugar<<"\t"<<fSugar<<"\t"<<tSugar<<endl;
	cout <<"Rice\t"<<qRice<<"\t"<<fRice<<"\t"<<tRice<<endl;
	cout <<"TOTAL\t\t\t"<<total<<endl;
	cout <<"Discount\t"<<disRate<<"\t"<<discount<<endl;
	cout <<"TAX\t\t"<<taxRate<<"\t"<<tax<<endl;
	cout <<"PAYABLE:\t\t"<<pay;
	
	return 0;
}