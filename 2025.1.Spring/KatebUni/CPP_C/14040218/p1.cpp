#include <iostream>
using namespace std;
int main(){
	
	double w, h ,b;
	
	cout<<"W: ";
	cin>>w;
	cout<<"H:";
	cin>>h;
	
	b=w/(h*h);
	cout<<"BMI= "<<b<<endl;
	
	if (b<20)
		cout<<"Kambood Wazn.";
	else if (b<25)
		cout<<"Monaseb";
	else if (b<30)
	{
		cout<<"Ezafa";
	}
	else if (b<35)
		cout<<"Chaghi 1";
	else 
		cout<<"Chaghi 2";
	return 0;
}