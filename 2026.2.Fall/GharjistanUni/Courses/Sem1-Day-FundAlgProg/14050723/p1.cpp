#include <iostream>
using namespace std;
int main(){
	float qMilk, qSugar, qRice;
	
	cin >>qMilk;
	cin >>qRice;
	cin >>qSugar;
	
	float fMilk= 50;
	float fRice= 160;
	float fSugar= 70;
	
	float tMilk= qMilk*fMilk;
	float tRice= qRice*fRice;
	float tSugar= qSugar*fSugar;
	
	float total= tMilk+tRice+tSugar;
	
	float disRate= 15;
	float discount= total*disRate/100;
	
	float taxRate= 20;
	float tax= (total-discount)*taxRate/100;
	
	float pay= total-discount+tax;
	cout <<pay;
	
	return 0;
}