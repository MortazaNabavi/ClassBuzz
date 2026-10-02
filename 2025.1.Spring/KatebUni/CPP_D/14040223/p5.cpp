#include <iostream>
using namespace std;
int main(){
	
	int s1, s2, s3;
	int c1, c2 ,c3;
	
	cout<<"S1 , c1: ";
	cin>>s1>>c1;
	cout<<"S2 , c2: ";	
	cin>>s2>>c2;
	cout<<"S3 , c3: ";
	cin>>s3>>c3;
	
	int tc=c1+c2+c3;
	int ts=c1*s1+c2*s2+c3*s3;
	int av=ts/tc;
	
	if (av<60)
		cout<<"Mashroot"<<endl;
	else
		cout<<"Ghair Mashroot"<<endl;
		
	
	if (s1<55)	
		cout<<"Mazmoon 1 Nakam"<<endl;
	else
		cout<<"Mazmoon 1 Kamyab"<<endl;
		
	
	if (s2<55)	
		cout<<"Mazmoon 2 Nakam"<<endl;
	else
		cout<<"Mazmoon 2 Kamyab"<<endl;
	
	if (s3>=55)
		cout<<"Mazmoon 3 Kamyab";
	else
		cout<<"Mazmoon 3 Nakam";
	
	return 0;
}