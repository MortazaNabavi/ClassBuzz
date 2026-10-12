#include <iostream>
using  namespace std;
int main(){
	float usage, box, stationary, pay, fee;
	box =30;
	stationary =10;
	fee =2.5;
	cout<<"Enter the usage (kw): ";
	cin >>usage;
	pay= usage*fee+box+stationary; 
	
	cout<<"Usage:\t\t"<<usage<<"\n";
	cout<<"Fee:\t\t"<<fee<<"\n";
	cout<<"Box:\t\t"<<box<<"\n";
	cout<<"Stationary:\t"<<stationary<<"\n";
	cout<<"_______________________________\n";
	cout<<"PAY:\t"<<pay;
	return 0;
}