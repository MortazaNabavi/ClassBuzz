#include <iostream>
using namespace std;
int main(){
	float Q_Milk, Q_Sugar, Q_Rice;
	cout<<"Enter QTY for Milk: ";
	cin>>Q_Milk;
	
	cout<<"Enter QTY for Sugar: ";
	cin>>Q_Sugar;
	
	cout<<"Enter QTY for Rice: ";
	cin>>Q_Rice;
	
	float F_Milk=50;
	float F_Rice=160;
	float F_Sugar=70;
	
	float T_Milk=Q_Milk*F_Milk;
	float T_Sugar=Q_Sugar*F_Sugar;
	float T_Rice=Q_Rice*F_Rice;
	
	float TOTAL=T_Milk+T_Sugar+T_Rice;
	
	float DiscountRate=15;
	float Discount=TOTAL*DiscountRate/100;
	
	float TaxRate=20;
	float Tax=(TOTAL-Discount)*TaxRate/100;
	
	float Pay=TOTAL-Discount+Tax;
	
	
	cout<<"#\tItem\tFee\tQTY\tTOTAL\n";
	cout<<"1\tMilk\t"<<F_Milk<<"\t"<<Q_Milk<<"\t"<<T_Milk<<endl;
	cout<<"2\tSugar\t"<<F_Sugar<<"\t"<<Q_Sugar<<"\t"<<T_Sugar<<endl;
	cout<<"3\tRice\t"<<F_Rice<<"\t"<<Q_Rice<<"\t"<<T_Rice<<endl;
	cout<<"TOTAL\t\t\t"<<TOTAL<<endl;
	cout<<"Discount\t\t"<<DiscountRate<<"\t"<<Discount<<endl;
	cout<<"Tax\t\t\t"<<TaxRate<<"\t"<<Tax<<endl;
	cout<<"PAYABLE\t\t\t"<<Pay<<endl;
	
	cout<<Pay;
}