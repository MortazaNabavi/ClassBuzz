#include <iostream>
using namespace std;
int main(){
	
	int c1, c2, c3;
	int s1, s2, s3;
	
	cout<<"(s, c) #1: ";
	cin>>s1>>c1;
	cout<<"(s, c) #2: ";
	cin>>s2>>c2;
	cout<<"(s, c) #3: ";
	cin>>s3>>c3;
	
	if (s1<55)
		cout<<"#1 Nakam :(\n";
	else
		cout<<"#1 Kamyab :)\n";

	if (s2<55)
		cout<<"#2 Nakam :(\n";
	else
		cout<<"#2 Kamyab :)\n";

	if (s3>=55)
		cout<<"#3 Kamyab :)\n";
	else
		cout<<"#3 Nakam :(\n";
	
	int sum= s1*c1 + s2*c2 + s3*c3;
	int cr=c1+c2+c3;
	
	int av=sum/cr;
	cout<<av<<endl;
	
	if (av>=60)
		cout<<"ghair Mashroot ;)";
	else
		cout<<"Mashroot :/";
	
	return 0;
}