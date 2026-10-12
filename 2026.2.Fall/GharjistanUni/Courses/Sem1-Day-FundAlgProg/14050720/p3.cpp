#include <iostream>
using  namespace std;
int main(){
	float usage, box, stationary, pay, fee;
	box =200;
	stationary =20;
	fee =3;
	cout<<"Enter the usage (kw): ";
	cin >>usage;
	pay= usage*fee+box+stationary; 
	
	cout<<"Usage:\t\t"<<usage<<" KW\n";
	cout<<"Fee:\t\t"<<fee<<" AFNs\n";
	cout<<"Box:\t\t"<<box<<" AFNs\n";
	cout<<"Stationary:\t"<<stationary<<" AFNs\n";
	cout<<"_______________________________\n";
	cout<<"PAY:\t"<<pay<<" AFNs";
	return 0;
}