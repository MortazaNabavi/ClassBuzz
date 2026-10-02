#include <iostream>
using namespace std;
int main()
{
	int qm, qr, qw;
	
	cout<<"Enter #Milk: ";
	cin>>qm;
	
	cout<<"Enter #Rice: ";
	cin>>qr;
	
	cout<<"Enter #Water: ";
	cin>>qw;
	
	int fm=20;
	int fr;
	fr=100;
	int fw=10;
	
	int totalMilk, totalRice, totalWater;
	totalMilk=qm*fm;
	totalRice=qr*fr;
	totalWater=qw*fw;
	
	int tQun;
	tQun=qm+qr+qw;
	
	int tt=totalMilk+totalRice+totalWater;
	
	int tax;
	tax=10;
		
	int pay;
	pay=tt+(tt*tax/100);
	
//	cout<<pay;

 
	cout<<"Item\tFee\tQNT\ttFee\n";
	cout<<"Milk\t"<<fm<<"\t"<<qm<<"\t"<<totalMilk<<endl;
	cout<<"Rice\t"<<fr<<"\t"<<qr<<"\t"<<totalRice<<endl;
	cout<<"Water\t"<<fw<<"\t"<<qw<<"\t"<<totalWater<<endl;
	cout<<"Total: \t\t"<<tQun<<"\t"<<tt<<"\n";
	cout<<"PAY: "<<pay<<"AFNs";
		
	return 0;
}