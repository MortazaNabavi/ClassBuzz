#include <iostream>
using namespace std;
int main(){
	
	int qm;
	int qr;
	int qw;
	
	cout<<"Enter Quantity Milk: ";
	cin>>qm;
	
	cout<<"Enter Quantity Rice: ";
	cin>>qr;
	
	cout<<"Enter Quantity Water: ";
	cin>>qw;
	
	int fm;
	fm=20;
	
	int fr=100;
	int fw=10;
	
	int tm=qm*fm;
	int tr=qr*fr;
	int tw=qw*fw;
	
	int tq=qm+qr+qw;
	int tt=tm+tr+tw;
	
	int tax;
	tax=10;
	
	
	int pay=tt+(tax*tt/100);
	
//	cout<<pay;
	
	cout<<"item\tFee\tQNT.\t tFee\n";
	cout<<"Milk\t"<<fm<<"\t"<<qm<<"\t"<<tm<<endl;
	cout<<"Rice\t"<<fr<<"\t"<<qr<<"\t"<<tr<<endl;
	cout<<"Water\t"<<fw<<"\t"<<qw<<"\t"<<tw<<endl;
	cout<<"Total\t\t"<<tq<<"\t"<<tt<<"\n";
	cout<<"PAY: "<<pay<<" AFNs";
	
	return 0;
}