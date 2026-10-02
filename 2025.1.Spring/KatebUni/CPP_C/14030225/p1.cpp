#include <iostream>
using namespace std;
int main(){
	
	double c1, c2, c3, s1, s2 ,s3;
	
	cout<<"c, s CPP: ";
	cin>>c1>>s1;
	cout<<"c, s Math: ";
	cin>>c2>>s2;
	cout<<"c, s English: ";
	cin>>c3>>s3;
	
	double ts=s1*c1+s2*c2+s3*c3;
	double tc=c1+c2+c3;
	double av=ts/tc;
	
	if (av>=60){
		cout<<"Mashroot Nist! "<<endl;
	}else{
		cout<<"Mahsroot Ast! :("<<endl;
	}
	
	if (s1<55)
		cout<<"CPP Failed! :("<<endl;
	else
		cout<<"CPP Passed! :)"<<endl;
		
	if (s2>=55)
		cout<<"Math Passed :)\n";
	else
		cout<<"Math Failed :(\n";
		
	if (s3<55)
		cout<<"English Failed :(";
	else
		cout<<"English Passed";
	
	
	
	return 0;
}